#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.length();
  for (int i = 0; i < n; i++) {
    if (s[i] == 'W') {
      if (i < n && s[i + 1] == 'U') {
        if (i < n && s[i + 2] == 'B') {
          s[i] = '1';
          s[i + 1] = '1';
          s[i + 2] = '1';
        }
      }
    }
  }
  //   cout << s;
  for (int i = 0; i < n; i++) {
    int flag = 0;
    while (i < n && s[i] != '1') {
      cout << s[i];
      i++;
      flag = 1;
    }
    if (flag == 1)
      cout << " ";
  }
  return 0;
}