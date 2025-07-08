#include <iostream>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;


void dfs(char node, unordered_map<char, vector<char>>& adj, unordered_set<char>& visited) {
    cout << node << " ";
    visited.insert(node);

    for (char neighbor : adj[node]) {
        if (visited.find(neighbor) == visited.end()) {
            dfs(neighbor, adj, visited);
        }
    }
}

int main() {
    int nodes, edges;
    cout << "Enter number of nodes and edges: ";
    cin >> nodes >> edges;

    unordered_map<char, vector<char>> adj;
    vector<char> nodeList(nodes);

    cout << "Enter node names (like A B C D...):\n";
    for (int i = 0; i < nodes; ++i) {
        cin >> nodeList[i];
    }

    cout << "Enter " << edges << " edges (like A B):\n";
    for (int i = 0; i < edges; ++i) {
        char u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u); 
    }

    char start;
    cout << "Enter starting node for DFS: ";
    cin >> start;

    unordered_set<char> visited;

    cout << "\nDFS Traversal starting from " << start << ": ";
    dfs(start, adj, visited);
    cout << endl;
    return 0;
}
