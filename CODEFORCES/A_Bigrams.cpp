#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int k;
    cin >> k;
    int cnt = 0;
    int flag = 0;
    for (int j = 0; j < k; j++) {
      int temp;
      cin >> temp;
      if (temp == 2) {
        cnt++;
      }
      if (temp > 2 || cnt == 2) {
        flag = 1;
      }
    }
    if (flag == 0) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }
  return 0;
}