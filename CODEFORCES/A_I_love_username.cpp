#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  int temp;
  cin >> temp;
  int maxi = temp;
  int mini = temp;
  for (int i = 1; i < n; i++) {
    cin >> temp;
    if (temp > maxi) {
      maxi = temp;
      ans++;
    }
    if (temp < mini) {
      mini = temp;
      ans++;
    }
  }
  cout << ans;
  return 0;
}