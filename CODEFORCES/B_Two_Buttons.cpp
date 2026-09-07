#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int count = 0;
  while (m > n) {
    if (m % 2 == 0) {
      m = m / 2;
    } else {
      m += 1;
    }
    count++;
  }
  count += n - m;
  cout << count;
  return 0;
}