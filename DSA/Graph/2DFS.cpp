#include <iostream>
#include <vector>
using namespace std;

class Graph {
   private:
    int numVertices;
    vector<vector<int>> adjList;
    vector<int> visited;

   public:
    Graph(int numVertices) : numVertices(numVertices) {
        adjList.resize(numVertices);
        visited.resize(numVertices, false);
    }

    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    void dfs(int vertex) {
        visited[vertex] = true;

        cout << vertex << " ";

        for (int adjV = 0; adjV < adjList[vertex].size(); adjV++) {
            int nbr = adjList[vertex][adjV];
            if (!visited[nbr]) {
                dfs(nbr);
            }
        }
    }

    void dfsAll() {
        for (int i = 0; i < numVertices; i++) {
            if (!visited[i]) {
                cout << "Starting new DFS from vertex " << i << ":\n";
                dfs(i);
                cout << "\n";
            }
        }
    }
};

int main() {
    Graph g(7);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(1, 5);
    g.addEdge(1, 6);
    g.addEdge(6, 2);

    g.dfsAll();

    return 0;
}