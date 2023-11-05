// graphs data structure combined from net and from neil
#include <iostream>
#include <list> //its a c++ linked list
using namespace std;

class Graph_mat
{
public:
    bool **adjMatrix;
    int v;
    // initializing the matrix values to 0
    Graph_mat(int v)
    {
        this->v = v;
        adjMatrix = new bool *[v];
        for (int i = 0; i < v; i++)
        {
            adjMatrix[i] = new bool[v];
            for (int j = 0; j < v; j++)
            {
                adjMatrix[i][j] = false;
            }
        }
    }
    void addEdge(int i, int j)
    { // adding edges to our empty matrix
        adjMatrix[i][j] = true;
        adjMatrix[j][i] = true;
    }
    void removeEdge(int i, int j)
    { // removing edges to our creates matrix
        adjMatrix[i][j] = false;
        adjMatrix[j][i] = false;
    }
    // printing our adjacency matrix
    void display()
    {
        cout << "adjacent matrix display -> " << endl;
        for (int i = 0; i < v; i++)
        {
            cout << i << " : "; // rows display
            for (int j = 0; j < v; j++)
            {
                cout << adjMatrix[i][j] << " ";
            }
            cout << "\n";
        }
    }
};
class Graph_list
{
public:
    int v;
    list<int> *adj;
    bool *visited; // we can also take map functions refer geeks for geeks
    Graph_list(int v)
    {
        this->v = v;
        adj = new list<int>[v];
    }
    void addEdge(int v, int e)
    {
        adj[v].push_back(e); // add e to v's list
        adj[e].push_back(v);
    }
    void print()
    {
        cout << "adjacent list display -> " << endl;
        for (int i = 0; i < v; i++)
        {
            cout << "\n vertex" << i << ":";
            for (auto x : adj[i])
            {
                cout << " -> " << x;
            }
        }
    }
    void DFS(int vertex)
    {
        visited[vertex] = true;
        list<int> adjs = adj[vertex]; // this is not necessary to store in a new list. we can iterate through an old list
        cout << vertex << " ";
        list<int>::iterator i;
        for (i = adjs.begin(); i != adjs.end(); i++)
        {
            if (!visited[*i])
            {
                DFS(*i);
            }
        }
    }
    void BFS(int vertex)
    {
        visited = new bool[v];
        for (int i = 0; i < v; i++)
        {
            visited[i] = false;
        }
        list<int> queue;
        visited[vertex] = true;
        queue.push_back(vertex);
        list<int>::iterator i;
        while (!queue.empty())
        {
            int curvertex = queue.front();
            cout << curvertex << " ";
            queue.pop_front();
            for (i = adj[curvertex].begin(); i != adj[curvertex].end(); i++)
            {
                if (!visited[*i])
                {
                    visited[*i] = true;
                    queue.push_back(*i);
                }
            }
        }
    }
    //     void recursiveBFS(Graph_list const &graph, queue<int> &q, vector<bool> &discovered)
    // {
    //     if (q.empty()) {
    //         return;
    //     }

    //     // dequeue front node and print it
    //     int v = q.front();
    //     q.pop();
    //     cout << v << " ";

    //     // do for every edge (v, u)
    //     for (int u: graph.adjList[v])
    //     {
    //         if (!discovered[u])
    //         {
    //             // mark it as discovered and enqueue it
    //             discovered[u] = true;
    //             q.push(u);
    //         }
    //     }

    //     recursiveBFS(graph, q, discovered);
};
int main()
{
    Graph_mat gm(5);
    Graph_list gl(5);
    gm.addEdge(0, 1);
    gm.addEdge(0, 2);
    gm.addEdge(1, 2);
    gm.addEdge(2, 4);
    gm.addEdge(0, 3);
    gm.display();
    gl.addEdge(0, 1);
    gl.addEdge(0, 2);
    gl.addEdge(1, 2);
    gl.addEdge(2, 4);
    gl.addEdge(0, 3);
    gl.print();
    cout << "\nDFS by list on the graph -> " << endl;
    gl.DFS(2);
    cout << "\nBFS by list on the graph -> " << endl;
    gl.BFS(2);
    return 0;
}