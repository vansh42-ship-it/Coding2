#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int ans = 0;
  int k = 0;
  while (a != 0) {
    ans++;
    a--;
    k++;
    if (k == b) {
      k = 0;
      a++;
    }
  }
  cout << ans;
  return 0;
}