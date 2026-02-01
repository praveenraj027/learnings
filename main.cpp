#include <iostream>
#include <vector>
#include <climits>
#include <list>
#include <unordered_map>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;

void dfs(int node, unordered_map<int, bool> &vis, stack<int> &st, unordered_map<int, list<int>> &adj)
{
    vis[node] = true;
    for (auto nbr : adj[node])
    {
        if (!vis[nbr])
        {
            dfs(nbr, vis, st, adj);
        }
    }
    st.push(node);
}

void revDfs(int node, unordered_map<int, bool> &vis, unordered_map<int, list<int>> &transpose)
{
    vis[node] = true;

    for (auto nbr : transpose[node])
    {
        if (!vis[nbr])
        {
            revDfs(nbr, vis, transpose);
        }
    }
}

int stronglyConnectedComponents(int v, vector<vector<int>> &edges)
{
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i][0];
        int to = edges[i][1];

        adj[u].push_back(to);
    }

    // Topological sort
    stack<int> s;
    unordered_map<int, bool> vis;
    for (int i = 0; i < v; i++)
    {
        if (!vis[i])
        {
            dfs(i, vis, s, adj);
        }
    }

    // Create a transpose graph
    unordered_map<int, list<int>> transpose;
    for (int i = 0; i < v; i++)
    {
        vis[i] = false;
        for (auto nbr : adj[i])
        {
            transpose[nbr].push_back(i);
        }
    }

    // dfs for above ordering
    int count = 0;
    while (!s.empty())
    {
        int top = s.top();
        s.pop();
        if (!vis[top])
        {
            count++;
            revDfs(top, vis, transpose);
        }
    }
    return count;
}

int main()
{
    int n = 5;
    vector<vector<int>> edges = {
        {0, 2},
        {2, 1},
        {1, 0},
        {2, 3},
        {3, 4},
    };

    cout << stronglyConnectedComponents(n, edges);
    return 0;
}
