#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> nums;
  for (int i = 0; i < m; i++) {
    int temp;
    cin >> temp;
    nums.push_back(temp);
  }
  sort(nums.begin(), nums.end());
  int ans = INT_MAX;
  for (int i = 0; i < m - n + 1; i++) {
    int temp2 = nums[i + n - 1] - nums[i];
    ans = min(ans, temp2);
  }
  cout << ans;
  return 0;
}