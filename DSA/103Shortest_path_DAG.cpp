#include <bits/stdc++.h>
using namespace std;

void topoSort(unordered_map<int, list<pair<int, int>>> &adj, int node,
              unordered_map<int, bool> &visited, stack<int> &s) {
  visited[node] = true;
  for (auto neighbour : adj[node]) {
    int v = neighbour.first;
    if (!visited[v]) {
      topoSort(adj, v, visited, s);
    }
  }
  s.push(node);
}

vector<int> shortestPathInDAG(int n, int m, vector<vector<int>> &edges) {
  // CREATING ADJ LIST
  unordered_map<int, list<pair<int, int>>> adj;
  for (int i = 0; i < m; i++) {
    int u = edges[i][0];
    int v = edges[i][1];
    int wt = edges[i][2];
    adj[u].push_back({v, wt});
  }
  //
  stack<int> s;
  unordered_map<int, bool> visited;
  for (int i = 0; i < n; i++) {
    if (!visited[i]) {
      topoSort(adj, i, visited, s);
    }
  }
  vector<int> dist(n, INT_MAX);
  int src = 0;
  dist[src] = 0;
  while (!s.empty()) {
    int top = s.top();
    s.pop();
    if (dist[top] != INT_MAX) {
      for (auto i : adj[top]) {
        if (dist[i.first] > (dist[top] + i.second)) {
          dist[i.first] = (dist[top] + i.second);
        }
      }
    }
  }
  for (int i = 0; i < dist.size(); i++) {
    if (dist[i] == INT_MAX) {
      dist[i] = -1;
    }
  }
  return dist;
}