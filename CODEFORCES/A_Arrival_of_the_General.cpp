#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> lib(n, 0);
  int maxi = -100;
  int mini = 2000;
  int a = 0;
  int b = 0;
  for (int i = 0; i < n; i++) {
    cin >> lib[i];
    if (maxi < lib[i]) {
      a = i;
      maxi = lib[i];
    }
    if (mini >= lib[i]) {
      b = i;
      mini = lib[i];
    }
  }
  if (maxi == mini) {
    cout << 0;
    return 0;
  }
  if (a < b) {
    cout << a + (n - 1 - b);
    return 0;
  } else {
    cout << a + (n - b - 2);
  }
  return 0;
}