#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    vector<int> visited;
    for (int j = 0; j < n; j++) {
      int temp;
      cin >> temp;
      int flag = 0;
      for (int k = 0; k < visited.size(); k++) {
        if (visited[k] == temp) {
          flag = 1;
          break;
        }
      }
      if (flag == 0) {
        visited.push_back(temp);
      }
    }
    int ans = INT_MAX;
    for (int k = 0; k < visited.size(); k++) {
      if (visited[k] >= visited.size()) {
        ans = min(ans, visited[k]);
      }
    }
    cout << ans << endl;
  }
  return 0;
}