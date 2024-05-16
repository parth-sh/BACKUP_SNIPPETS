#include "bits-stdc++.h"
#define rep(i, a, b) for (int i = a; i < b; i++)
const int N = 1e5 + 2, MOD = 1e9 + 7;

using namespace std;

bool visited[N];               // visited array
vector<int> adjacencyList[N];  // adjaceny list

vector<vector<int>> adjacencyMatrixInput() {
    int nodes, edges;
    cin >> nodes >> edges;

    vector<vector<int>> adjacencyMatrix(nodes + 1, vector<int>(nodes + 1, 0));

    rep(i, 0, edges) {
        int x, y;
        cin >> x >> y;
        adjacencyMatrix[x][y] = 1;
        adjacencyMatrix[y][x] = 1;
    }

    cout << "adjacency matrix of above graph is given by: " << endl;
    rep(i, 1, nodes + 1) {
        rep(j, 1, nodes + 1) { cout << adjacencyMatrix[i][j] << " "; }
        cout << endl;
    }
    if (adjacencyMatrix[3][7] == 1) {
        cout << "there is an edge between 3 to 7" << endl;
    } else {
        cout << "no edge" << endl;
    }
    return adjacencyMatrix;
}

void initAdjacencyList() {
    int nodes, edges;
    cin >> nodes >> edges;
    rep(i, 0, edges) {
        int x, y;
        cin >> x >> y;
        adjacencyList[x].push_back(y);
        adjacencyList[y].push_back(x);
    }
    // cout << "adjacency list of above graph is given by: " << endl;
    // rep(i, 1, nodes + 1) {
    //     cout << i << " -> ";
    //     for (int x : adjacencyList[i]) {
    //         cout << x << " ";
    //     }
    //     cout << endl;
    // }
}

// g++ -std=c++11 MyGraph.cpp && ./a.out
int main() {
    fill_n(visited, N, 0);  // Initialize visited array with 0

    /*
    7 7
    1 2
    1 3
    2 4
    2 5
    2 6
    2 7
    7 3
    */

    // vector<vector<int>> adjacencyMatrix = adjacencyMatrixInput();
    initAdjacencyList();
    return 0;
}