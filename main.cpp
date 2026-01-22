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
        // l[v].push_back(u);
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

    void topologicalSort()
    {
        vector<int> result;
        vector<int> indegree(V, 0);

        // Calculate indegree
        for (int u = 0; u < V; u++)
        {
            for (int v : l[u])
            {
                indegree[v]++;
            }
        }
        // 0 indegree => queue
        queue<int> q;
        for (int i = 0; i < V; i++)
        {
            if (indegree[i] == 0)
                q.push(i);
        }

        while (!q.empty())
        {
            int curr = q.front();
            q.pop();
            result.push_back(curr);
            for (int v : l[curr])
            {
                indegree[v]--;
                if (indegree[v] == 0)
                {
                    q.push(v);
                }
            }
        }

        // Print result
        for (int val : result)
        {
            cout << val << " ";
        }
        cout << endl;
    }
};

int main()
{
    Graph g(6);
    g.addEdge(3, 1);
    g.addEdge(2, 3);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(5, 0);
    g.addEdge(5, 2);
    g.topologicalSort();
    return 0;
}
