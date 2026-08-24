#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    int temp;
    bool flag = 0;
    int ans = 1;
    cin >> temp;
    int prev = temp;
    for (int j = 1; j < n; j++) {
      cin >> temp;
      if (temp < prev) {
        flag = 1;
      }
      prev = temp;
    }
    if (flag) {
      cout << 1 << endl;
    } else {
      cout << n << endl;
    }
  }
  return 0;
}