#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

class Graph
{
    int V;
    list<int> *l; // Like dynamic arr (int *arr;)

public:
    Graph(int V)
    {
        this->V = V;
        l = new list<int>[V];
        // arr = new arr[V];
    }

    void addEdge(int u, int v)
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void printAdjList()
    {
        for (int i = 0; i < V; i++)
        {
            cout << i << ": ";
            for (int neigh : l[i])
            {
                cout << neigh << " ";
            }
            cout << endl;
        }
    }

    void bfs()
    {
        queue<int> q;
        vector<bool> vis(V, false);
        q.push(0);
        vis[0] = true;

        while (q.size() > 0)
        {
            int u = q.front();
            q.pop();
            cout << u << " ";

            for (int v : l[u])
            {
                if (!vis[v])
                {
                    vis[v] = true;
                    q.push(v);
                }
            }
        }
        cout << endl;
    }

    void dfsHelper(int u, vector<bool> &vis)
    {
        cout << u << " ";
        vis[u] = true;

        for (int v : l[u])
        {
            if (!vis[v])
            {
                dfsHelper(v, vis);
            }
        }
    }

    void dfs()
    {
        int u = 0;
        vector<bool> vis(V, false);
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                dfsHelper(u, vis);
            }
        }
        cout << endl;
    }

    bool isCycleUndirBFS(int src, vector<bool> &vis)
    {
        queue<pair<int, int>> q;
        q.push({src, -1});
        vis[src] = true;

        while (q.size() > 0)
        {
            int u = q.front().first;
            int parU = q.front().second;
            q.pop();

            list<int> neighbours = l[u];
            for (int v : neighbours)
            {
                if (!vis[v])
                {
                    q.push({v, u});
                    vis[v] = true;
                }
                else if (v != parU)
                {
                    return true;
                }
            }
        }
        return false;
    }

    bool isCycle()
    {
        vector<bool> vis(V, false);

        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                if (isCycleUndirBFS(i, vis))
                {
                    return true;
                }
            }
        }
        return false;
    }
};

int main()
{
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(0, 3);
    g.addEdge(1, 2);
    g.addEdge(3, 4);
    cout << g.isCycle() << endl;
    return 0;
}
