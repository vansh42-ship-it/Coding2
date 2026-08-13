#include <bits/stdc++.h>
using namespace std;

vector<int> bfsTraversal(int n, vector<vector<int>> &adj) {
  queue<int> q;
  vector<int> ans;
  if (n == 0)
    return ans;
  q.push(0);
  vector<bool> visited(n, false);
  visited[0] = true;
  while (!q.empty()) {
    int front = q.front();
    q.pop();
    ans.push_back(front);
    for (int c : adj[front]) {
      if (visited[c] == true) {
        continue;
      } else {
        visited[c] = true;
        q.push(c);
      }
    }
  }
  return ans;
}