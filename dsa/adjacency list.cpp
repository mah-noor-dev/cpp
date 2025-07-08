#include <iostream>
#define <unordered_map>
#include <vector>
using namespace std;

int main() {
    int nodes, edges;
    cout << "Enter number of nodes and edges: ";
    cin >> nodes >> edges;

    unordered_map<char, vector<char>> adj; // Adjacency list

    cout << "Enter node names (like A B C D...):\n";
    vector<char> nodeList(nodes);
    for (int i = 0; i < nodes; ++i) {
        cin >> nodeList[i];
    }

    cout << "Enter " << edges << " edges (like A B):\n";
    for (int i = 0; i < edges; ++i) {
        char u, v;
        cin >> u >> v;

        // Undirected graph
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Print adjacency list
    cout << "\nAdjacency List:\n";
    for (char node : nodeList) {
        cout << node << " -> ";
        for (char neighbor : adj[node]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }

    return 0;
}

