#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    int j = 0;
    int cnt = 0;
    for (int j = 0; j < s.length(); j++) {
      if (s[j] == '(') {
        cnt++;
      }
      if (s[j] == ')') {
        cnt--;
      }
      if (cnt == 0 && j != s.length() - 1) {
        cout << "YES" << endl;
        break;
      }
      if (cnt == 0 && j == s.length() - 1) {
        cout << "NO" << endl;
      }
    }
  }
  return 0;
}