#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    if (n % 2 == 0 && n % 4 != 0) {
      cout << "NO" << endl;
      continue;
    } else {
      cout << "YES" << endl;
      int temp1 = 2;
      int sum = 0;
      for (int i = 0; i < n / 2; i++) {
        cout << temp1 << " ";
        sum += temp1;
        temp1 += 2;
      }
      int temp2 = 1;
      for (int i = 0; i < n / 2 - 1; i++) {
        cout << temp2 << " ";
        sum -= temp2;
        temp2 += 2;
      }
      cout << sum << " ";
    }
  }
  return 0;
}