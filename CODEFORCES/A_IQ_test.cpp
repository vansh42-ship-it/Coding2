#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int idx1 = -1;
  int idx2 = -1;
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    if (idx1 == -1 && temp % 2 == 0) {
      idx1 = i;
    }
    if (idx2 == -1 && temp % 2 != 0) {
      idx2 = i;
    }
    if (temp % 2 != 0)
      cnt++;
  }
  if (cnt == 1) {
    cout << idx2 + 1;
    return 0;
  }
  cout << idx1 + 1;
  return 0;
}