#include <iostream>
#include <vector>

using namespace std;

#define UNDIRECTED 0

// directed and undirected  graph
void addEdge(vector<int> adj[], int u, int v, bool isUndirected) {
  adj[u].push_back(v);
  if(isUndirected)
    adj[v].push_back(u);
}

// a utility func to print the adj list 
void printGraph(vector<int> adj[], const int V) {
  for(int v=0; v<V; ++v) {
    printf("\nAdjacency list of vertex %c\nhead ", v+65);
    for(auto x : adj[v]) 
      printf("-> %c", x+65);
    cout << endl;
  }
}

int main() {
  const int V = 6;
  vector<int> adj[V];

  addEdge(adj, 0, 2, UNDIRECTED); // A
  addEdge(adj, 1, 3, UNDIRECTED); // B
  addEdge(adj, 2, 1, UNDIRECTED); // C
  addEdge(adj, 2, 4, UNDIRECTED);
  addEdge(adj, 3, 2, UNDIRECTED); // D
  addEdge(adj, 5, 3, UNDIRECTED); // F
  addEdge(adj, 5, 4, UNDIRECTED);

  printGraph(adj, V);
  return 0;
}

