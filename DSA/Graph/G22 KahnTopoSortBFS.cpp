/*
A Topological Ordering is an ordering of the nodes in a directed graph where
for each directed edge from node A to node B, node A appears before node B in
the ordering.

Note: Topological orderings are NOT unique.

"Not Every Graph has a Topological Sort!"

A simple directed graph with four nodes labeled A, B, C, and
D, arranged in a cycle: A → B → C → D → A. This cycle indicates why a
topological sort is not possible, as topological sorting requires the graph to
be a Directed Acyclic Graph (DAG) and this graph clearly contains a cycle.

Not Every Graph has a Topological Sort!
Directed Cyclic Graph cannot have a Topological Sort.
Only Directed Acyclic Graph (DAG) have a valid Topological Sort.



Sample Test Case and intuition

The image depicts a directed graph with the following structure:

Node A at the top, with directed edges to nodes B, C, and D.
Node B has directed edges to nodes E and F.
Node C has a directed edge to node G.
Nodes D, E, F, and G do not have outgoing edges.


Algorithm
While(All the nodes are not visited)
Nodes with zero indegree can be added to the output array.
All the nodes which are adjacent to terminal nodes, gets their indegree
subtracted

*/
#include <iostream>
#include <queue>
#include <unordered_map>
#include <vector>

using namespace std;

class Graph {
   private:
    int vertexCount;
    vector<vector<int>> adjList;
    unordered_map<int, int> inDeg;

   public:
    Graph(int vertexCount) : vertexCount(vertexCount) {
        adjList.resize(vertexCount);
    }

    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        inDeg[v]++;
    }

    void topoSort() {
        queue<int> q;
        for (int node = 0; node < vertexCount; node++) {
            if (inDeg[node] == 0) {
                q.push(node);
            }
        }
        int count = 0;
        while (!q.empty()) {
            count++;
            int node = q.front();
            q.pop();

            cout << node << " ";

            for (int adjV = 0; adjV < adjList[node].size(); adjV++) {
                int nbr = adjList[node][adjV];
                inDeg[nbr]--;

                if (inDeg[nbr] == 0) {
                    q.push(nbr);
                }
            }
        }

        if (count != vertexCount) {
            cout << "Cycle detected, topological sort not possible\n";
        }
    }
};

int main() {
    // Graph g(4);
    // g.addEdge(0, 1);
    // g.addEdge(1, 2);
    // g.addEdge(2, 3);

    Graph g(3);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 0);

    g.topoSort();

    return 0;
}