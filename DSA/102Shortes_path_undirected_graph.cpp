#include <bits/stdc++.h>
using namespace std;

vector<int> shortestPath(vector<pair<int, int>> edges, int n, int m, int s,
                         int t) {
  unordered_map<int, list<int>> adj;
  for (int i = 0; i < m; i++) {
    int u = edges[i].first;
    int v = edges[i].second;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  queue<int> q;
  unordered_map<int, int> parent;
  unordered_map<int, bool> visited;

  q.push(s);
  parent[s] = -1;
  visited[s] = true;

  bool pathExists = false;

  while (!q.empty()) {
    int front = q.front();
    q.pop();

    if (front == t) {
      pathExists = true;
      break;
    }

    for (auto neighbor : adj[front]) {
      if (!visited[neighbor]) {
        visited[neighbor] = true;
        parent[neighbor] = front;
        q.push(neighbor);
      }
    }
  }

  vector<int> ans;
  if (!pathExists) {
    return ans;
  }

  int currentNode = t;
  while (currentNode != -1) {
    ans.push_back(currentNode);
    currentNode = parent[currentNode];
  }

  reverse(ans.begin(), ans.end());
  return ans;
}
