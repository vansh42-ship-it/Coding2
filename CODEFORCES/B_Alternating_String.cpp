#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    int bad_combination = 0;
    for (int j = 0; j < s.length() - 1; j++) {
      if (s[j] == s[j + 1]) {
        bad_combination++;
      }
    }
    if (bad_combination > 2) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }
  return 0;
}