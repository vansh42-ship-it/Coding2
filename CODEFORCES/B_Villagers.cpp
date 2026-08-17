#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  for (int j = 0; j < t; j++) {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
      int temp;
      cin >> temp;
      arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    int i = n - 1;
    long long ans = 0;
    while (i > 1) {
      ans += max(arr[i], arr[i - 1]);
      i = i - 2;
    }
    if (n % 2 == 0) {
      ans += max(arr[0], arr[1]);
    } else {
      ans += arr[0];
    }
    cout << ans << endl;
  }
  return 0;
}