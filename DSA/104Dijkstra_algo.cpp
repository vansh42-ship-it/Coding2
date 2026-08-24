#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstra(vector<vector<int>> &vec, int v, int n, int src) {
  // MAKING ADJ LIST
  unordered_map<int, list<pair<int, int>>> adj;
  for (int i = 0; i < n; i++) {
    int u = vec[i][0];
    int v = vec[i][1];
    int wt = vec[i][2];

    adj[u].push_back({v, wt});
    adj[v].push_back({u, wt});
  }
  //
  set<pair<int, int>> s;
  vector<int> dist(v, INT_MAX);
  dist[src] = 0;
  s.insert({0, src});
  while (!s.empty()) {
    auto top = *(s.begin());
    int nodeDistance = top.first;
    int topNode = top.second;

    // remove top record now
    s.erase(s.begin());

    for (auto &neighbour : adj[topNode]) {
      if (nodeDistance + neighbour.second < dist[neighbour.first]) {
        auto record = s.find(make_pair(dist[neighbour.first], neighbour.first));

        // if record found then erase it
        if (record != s.end()) {
          s.erase(record);
        }

        // distance update
        dist[neighbour.first] = nodeDistance + neighbour.second;
        // record push in set
        s.insert(make_pair(dist[neighbour.first], neighbour.first));
      }
    }
  }
  return dist;
}
