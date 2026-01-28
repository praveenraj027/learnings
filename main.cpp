#include <iostream>
#include <vector>
#include <climits>
#include <list>
#include <unordered_map>
#include <queue>
#include <algorithm>
using namespace std;

vector<pair<pair<int, int>, int>> calculatePrimMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    unordered_map<int, list<pair<int, int>>> adj;

    for (int i = 0; i < m; i++)
    {
        int u = g[i].first.first;
        int v = g[i].first.second;
        int w = g[i].second;
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    vector<int> key(n, INT_MAX);
    vector<bool> mst(n, false);
    vector<int> parent(n, -1);

    // Prim's algorithm
    key[0] = 0;
    parent[0] = -1;

    for (int i = 0; i < n; i++)
    {
        int mini = INT_MAX;
        int u;

        // Find min node in key
        for (int v = 0; v < n; v++)
        {
            if (!mst[v] && key[v] < mini)
            {
                u = v;
                mini = key[v];
            }
        }

        // Mark mst[u] as true
        mst[u] = true;
        // Check its adjacent node

        for (auto it : adj[u])
        {
            int v = it.first;
            int wt = it.second;
            if (!mst[v] && wt < key[v])
            {
                parent[v] = u;
                key[v] = wt;
            }
        }
    }

    vector<pair<pair<int, int>, int>> result;
    for (int i = 1; i < n; i++)
    {
        result.push_back({{parent[i], i}, key[i]});
    }
    return result;
}

int main()
{
    int n = 5;
    int m = 5;
    vector<pair<pair<int, int>, int>> g = {
        {{0, 1}, 2},
        {{1, 2}, 3},
        {{2, 3}, 4},
        {{0, 3}, 1},
        {{3, 4}, 5},
    };
    auto mst = calculatePrimMST(n, m, g);
    for (auto e : mst)
    {
        cout << e.first.first << " - " << e.first.second << ": " << e.second << endl;
    }
    return 0;
}
