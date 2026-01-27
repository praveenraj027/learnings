#include <iostream>
#include <vector>
#include <stack>
#include <list>
#include <unordered_map>
#include <queue>
#include <algorithm>
using namespace std;

void shortestPath(vector<pair<int, int>> edges, int n, int m, int s, int t)
{
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // bfs
    unordered_map<int, bool> vis;
    unordered_map<int, int> par;
    queue<int> q;
    q.push(s);
    vis[s] = true;

    while (!q.empty())
    {
        int front = q.front();
        q.pop();

        for (auto i : adj[front])
        {
            if (!vis[i])
            {
                vis[i] = true;
                par[i] = front;
                q.push(i);
            }
        }
    }
    // prepare shortest path

    vector<int> ans;
    int curr = t;
    ans.push_back(t);
    while (curr != s)
    {
        curr = par[curr];
        ans.push_back(curr);
    }
    reverse(ans.begin(), ans.end());
    for (int val : ans)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    vector<pair<int, int>> edges = {
        {1, 2},
        {2, 3},
        {3, 4},
        {1, 4},
        {4, 5}};
    int n = 5;
    int m = 5;
    int s = 1;
    int t = 5;
    shortestPath(edges, n, m, s, t);
    return 0;
}
