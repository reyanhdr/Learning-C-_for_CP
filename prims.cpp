#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

void primsAlgorithm(int n, vector<vector<pair<int, int>>>& adj) {
    vector<int> key(n, INT_MAX); // To store the minimum weight to reach a vertex
    vector<int> parent(n, -1);  // To store the MST structure
    vector<bool> inMST(n, false); // To mark visited vertices

    key[0] = 0; // Start from the 0th vertex
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    pq.push({0, 0}); // {key, vertex}

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        if (inMST[u]) continue;
        inMST[u] = true;

        for (auto [v, weight] : adj[u]) {
            if (!inMST[v] && weight < key[v]) {
                key[v] = weight;
                pq.push({key[v], v});
                parent[v] = u;
            }
        }
    }

    cout << "Edges in the Minimum Spanning Tree:\n";
    int totalWeight = 0;
    for (int i = 1; i < n; i++) {
        cout << parent[i] << " - " << i << "\n";
        totalWeight += key[i];
    }
    cout << "Total weight of MST: " << totalWeight << endl;
}

int main() {
    int n, e;
    cout << "Enter number of vertices and edges: ";
    cin >> n >> e;

    vector<vector<pair<int, int>>> adj(n);

    cout << "Enter edges (u, v, weight):\n";
    for (int i = 0; i < e; i++) {
        int u, v, weight;
        cin >> u >> v >> weight;
        adj[u].push_back({v, weight});
        adj[v].push_back({u, weight});
    }

    primsAlgorithm(n, adj);

    return 0;
}
