#include "bits-stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
const int N = 1e5 + 2, MOD = 1e9 + 7;

using namespace std;

bool visited[N];
vector<int> adjacencyList[N];
vector<vector<int>> adjacencyMatrix;

void intiAdjacencyMatrix(int nodes_count, int edges_count,
                         vector<pair<int, int>> edges) {
    vector<vector<int>> adjm(nodes_count + 1, vector<int>(nodes_count + 1, 0));
    rep(i, 0, edges_count) {
        adjm[edges[i].ff][edges[i].ss] = 1;
        adjm[edges[i].ss][edges[i].ff] = 1;
    }
    adjacencyMatrix = adjm;
}

void initAdjacencyList(int nodes_count, int edges_count,
                       vector<pair<int, int>> edges) {
    rep(i, 0, edges_count) {
        adjacencyList[edges[i].ff].push_back(edges[i].ss);
        adjacencyList[edges[i].ss].push_back(edges[i].ff);
    }
}

void bfs(int node) {
    queue<int> q;
    q.push(node);
    visited[node] = true;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << endl;
        for (int x : adjacencyList[node]) {
            if (!visited[x]) {
                visited[x] = 1;
                q.push(x);
            }
        }
    }
}

void dfs(int node) {
    visited[node] = 1;
    cout << node << endl;
    for (int x : adjacencyList[node]) {
        if (!visited[x]) {
            dfs(x);
        }
    }
}

/* g++ -std=c++11 MyGraph.cpp && ./a.out
7 7
1 2
1 3
2 4
2 5
2 6
2 7
7 3
*/
int main() {
    fill_n(visited, N, false);  // Initialize visited array with 0

    int n, m;  // nodes_count, edges_count
    vector<pair<int, int>> edges;
    cin >> n >> m;
    rep(i, 0, m) {
        int x, y;
        cin >> x >> y;
        edges.push_back({x, y});
    }

    intiAdjacencyMatrix(n, m, edges);
    initAdjacencyList(n, m, edges);

    // bfs(1);
    // dfs(1);

    return 0;
}