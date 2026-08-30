#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string temp;
  string ans;
  cin >> temp;
  int cnt = 1;
  for (int i = 1; i < n; i++) {
    string temp2;
    cin >> temp2;
    if (temp == temp2) {
      cnt++;
    } else {
      ans = temp2;
      cnt--;
    }
  }
  if (cnt > 0) {
    cout << temp;
  } else {
    cout << ans;
  }
  return 0;
}