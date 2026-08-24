#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string num;
    cin >> num;
    if (num[0] - '0' + num[1] - '0' + num[2] - '0' ==
        num[3] - '0' + num[4] - '0' + num[5] - '0') {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}