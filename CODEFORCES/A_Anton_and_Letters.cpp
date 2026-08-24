#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  string temp;
  while (cin >> temp && temp != "}") {
    s = s + temp;
  }
  int n = s.length();
  int cnt = 0;
  unordered_map<char, bool> unique;
  for (int i = 1; i < n - 1; i++) {
    char c = s[i];
    if (c == ',' || c == ' ')
      continue;
    if (!unique[c]) {
      cnt++;
      unique[c] = true;
    }
  }
  cout << cnt;
  return 0;
}