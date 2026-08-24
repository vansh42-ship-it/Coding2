#include <bits/stdc++.h>
using namespace std;

int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges) {
  // create adj list
  unordered_map<int, list<int>> adj;
  for (int i = 0; i < edges.size(); i++) {
    int u = edges[i].first - 1;
    int v = edges[i].second - 1;

    adj[u].push_back(v);
  }
  // find all indegrees
  unordered_map<int, int> indegree;
  for (auto i : adj) {
    for (auto j : i.second) {
      indegree[j]++;
    }
  }
  queue<int> q;
  for (int i = 0; i < n; i++) {
    if (indegree[i] == 0) {
      q.push(i);
    }
  }

  // do bfs
  int cnt = 0;
  while (!q.empty()) {
    int front = q.front();
    q.pop();

    // inc count
    cnt++;

    for (auto neighbour : adj[front]) {
      indegree[neighbour]--;
      if (indegree[neighbour] == 0) {
        q.push(neighbour);
      }
    }
  }
  return cnt == n ? false : true;
}

// TC: O(N+E)
// SC : O(N)