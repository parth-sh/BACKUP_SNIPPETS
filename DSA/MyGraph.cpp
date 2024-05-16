#include "bits-stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

using namespace std;

const int N = 1e5 + 2, MOD = 1e9 + 7;

bool visited[N];
vector<int> adjacencyList[N];
vector<vector<int>> adjacencyMatrix;

void intiAdjacencyMatrix(int nodes_count, int edges_count,
                         vector<pair<int, int>> edges) {
    vector<vector<int>> adjm(nodes_count, vector<int>(nodes_count, 0));
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

void toplogicalSort(int nodes_count, int edges_count,
                    vector<pair<int, int>> edges) {
    vector<int> indeg(nodes_count, 0);
    rep(i, 0, edges_count) {
        int u = edges[i].ff, v = edges[i].ss;
        adjacencyList[u].push_back(v);
        indeg[v]++;
    }
    queue<int> q;
}

/* g++ -std=c++11 MyGraph.cpp && ./a.out
7 7
0 1
0 2
1 3
1 4
1 5
1 6
6 2
*/
int main() {
    fill_n(visited, N, false);  // Initialize visited array with 0

    int n, m;  // nodes_count, edges_count
    vector<pair<int, int>> edges;
    cin >> n >> m;
    rep(i, 0, m) {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }

    intiAdjacencyMatrix(n, m, edges);
    initAdjacencyList(n, m, edges);

    // bfs(0);
    // dfs(0);

    // toplogicalSort(n, m, edges);

    return 0;
}