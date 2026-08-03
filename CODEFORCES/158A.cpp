#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> arr;
  int t;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> t;
    arr.push_back(t);
  }
  for (int i = 0; i < n; i++) {
    if (arr[i] >= arr[k - 1] && arr[i] > 0)
      ans++;
  }
  cout << ans << "\n";
}