#include <bits/stdc++.h>
using namespace std;

int main() {
  unordered_map<string, string> rel;
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    string temp1, temp2;
    cin >> temp1 >> temp2;
    rel[temp1] = temp1.length() > temp2.length() ? temp2 : temp1;
  }
  string ans = "";
  for (int i = 0; i < n; i++) {
    string temp;
    cin >> temp;
    cout << rel[temp];
    if (i < n - 1) {
      cout << " ";
    }
  }
  return 0;
}