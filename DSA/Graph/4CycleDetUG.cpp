#include <iostream>
#include <vector>

using namespace std;
class Graph {
   private:
    int vertexCount;
    vector<vector<int>> adjList;
    vector<bool> visited;

   public:
    Graph(int vertexCount) : vertexCount(vertexCount) {
        adjList.resize(vertexCount);
        visited.resize(vertexCount, false);
    }

    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    bool dfsCycleDetection(int vertex, int parent) {
        visited[vertex] = true;
        for (int adjV = 0; adjV < adjList[vertex].size(); adjV++) {
            int nbr = adjList[vertex][adjV];
            if (!visited[nbr]) {
                return dfsCycleDetection(nbr, vertex);
            } else if (parent != nbr) {
                return true;
            }
        }
        // no cycle
        return false;
    }

    bool isCycle() {
        fill(visited.begin(), visited.end(), false);
        for (int vertex = 0; vertex < vertexCount; vertex++) {
            if (!visited[vertex] && dfsCycleDetection(vertex, -1)) return true;
        }
        return false;
    }
};
int main() {
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 0);

    cout << (g.isCycle() ? "cycle present" : "no cycle present") << "\n";

    return 0;
}