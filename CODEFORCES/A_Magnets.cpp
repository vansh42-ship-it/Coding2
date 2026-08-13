#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, ans = 1;
  cin >> n;
  string prev;
  cin >> prev;
  n--;
  while (n--) {
    string s;
    cin >> s;
    if (s != prev) {
      ans++;
      prev = s;
    }
  }
  cout << ans;
  return 0;
}