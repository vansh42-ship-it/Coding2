#include <bits/stdc++.h>
using namespace std;

vector<int> bellmonFord(int n, int m, int src, vector<vector<int>> &edges) {

  vector<int> dist(n + 1, 1e9);
  dist[src] = 0;
  for (int i = 1; i <= n - 1; i++) {
    bool changed = false;
    // traverse on edge list
    for (int j = 0; j < m; j++) {
      int u = edges[j][0];
      int v = edges[j][1];
      int wt = edges[j][2];

      if (dist[u] != 1e9 && (dist[u] + wt) < dist[v]) {
        dist[v] = dist[u] + wt;
        changed = true;
      }
    }
    if (!changed) {
      break;
    }
  }
  // check for -ve cycle
  bool flag = 0;
  for (int i = 1; i <= n; i++) {
    // traverse on edge list
    for (int j = 0; j < m; j++) {
      int u = edges[j][0];
      int v = edges[j][1];
      int wt = edges[j][2];

      if (dist[u] != 1e9 && (dist[u] + wt) < dist[v]) {
        flag = 1;
        break;
      }
    }
  }
  if (flag == 1) {
    return {};
  }
  return dist;
}