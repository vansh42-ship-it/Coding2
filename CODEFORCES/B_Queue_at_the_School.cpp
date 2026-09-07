#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  string s;
  for (int i = 0; i < n; i++) {
    char k;
    cin >> k;
    s.push_back(k);
  }
  for (int j = 0; j < m; j++) {
    for (int i = s.length() - 1; i >= 1; i--) {
      if (s[i - 1] == 'B' && s[i] == 'G') {
        s[i - 1] = 'G';
        s[i] = 'B';
        i--;
      }
    }
  }
  cout << s;
  return 0;
}