#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, n1;
  cin >> n;
  int police = 0;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> n1;
    if (n1 > 0) {
      police += n1;
      continue;
    } else {
      if (police == 0) {
        ans++;
      } else {
        police--;
      }
    }
  }
  cout << ans;
  return 0;
}