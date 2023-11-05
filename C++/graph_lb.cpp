// this is creation and insertion of graphs by love Babbar
#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;
template <typename T>
class Graph
{
public:
    unordered_map<T, list<T>> adj;
    void add(T u, T v, bool direction)//for adding an edge bw the vertices
    {
        // direction = 0 -> undirected graph
        // direction = 1 -> directed graph
        // creating an edge from u to v(undirectional or bi-direcitonal)
        adj[u].emplace_back(v);
        if (direction == 0)
        {
            adj[v].emplace_back(u);
        }
    }
    void printAdjList()
    {
        for (auto i : adj)
        {
            cout << i.first << " -> ";//printing the vertex
            for (auto j : i.second)
            {
                cout << j << " , ";//printing the edges to that vertex
            }
            cout << "\n";
        }
    }
};
int main()
{
    Graph<int> g;
    int n, m;
    cout << "Enter no of nodes\n";
    cin >> n;
    cout << "Enter no of edges\n";
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.add(u, v, 0);
    }
    g.printAdjList();
}