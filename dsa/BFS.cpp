#include <iostream>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <queue>
using namespace std;
void bfs(char start, unordered_map<char, vector<char>>& adj) {
    unordered_set<char> visited;
    queue<char> q;

    visited.insert(start);
    q.push(start);

    cout << "BFS Traversal starting from " << start << ": ";

    while (!q.empty()) {
        char current = q.front();
        q.pop();
        cout << current << " ";

        for (char neighbor : adj[current]) {
            if (visited.find(neighbor) == visited.end()) {
                visited.insert(neighbor);
                q.push(neighbor);
            }
        }
    }
    cout << endl;
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
    cout << "Enter starting node for BFS: ";
    cin >> start;
    bfs(start, adj);

    return 0;
}

