#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int cnt_0 = 0;
  int cnt_5 = 0;
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    if (temp == 5) {
      cnt_5++;
    } else {
      cnt_0++;
    }
  }
  if (cnt_0 == 0) {
    cout << -1;
    return 0;
  }
  if (cnt_5 / 9 == 0) {
    cout << 0;
    return 0;
  }
  int k = cnt_5 / 9;
  string ans = "";
  for (int i = 0; i < 9 * k; i++) {
    ans.push_back('5');
  }
  for (int i = 0; i < cnt_0; i++) {
    ans.push_back('0');
  }
  cout << ans;
  return 0;
}