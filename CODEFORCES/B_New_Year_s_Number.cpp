#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    int k = temp / 2020;
    for (int j = 0; j <= k; j++) {
      int a = j * 2020;
      int b = (k - j) * 2021;
      if (a + b == temp) {
        cout << "YES" << endl;
        break;
      } else {
        if (j == k)
          cout << "NO" << endl;
      }
    }
  }
  return 0;
}