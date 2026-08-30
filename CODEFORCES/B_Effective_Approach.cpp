#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  long long ans1 = 0;
  long long ans2 = 0;
  vector<int> idx(n + 1);
  for (int i = 1; i <= n; i++) {
    int temp;
    cin >> temp;
    idx[temp] = i;
  }
  int k;
  cin >> k;
  for (int i = 0; i < k; i++) {
    int temp;
    cin >> temp;
    ans1 += idx[temp];
    ans2 += (n - idx[temp] + 1);
  }
  cout << ans1 << " " << ans2;
  return 0;
}