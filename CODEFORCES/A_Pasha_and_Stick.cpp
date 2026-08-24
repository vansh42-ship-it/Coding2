#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  if (n % 2 != 0) {
    cout << "0";
    return 0;
  }
  for (int i = 1; i < n; i++) {
    if (2 * i >= n / 2)
      break;
    ans++;
  }
  cout << ans;
  return 0;
}