#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
long long int solve1(int n) {
  // base case
  if (n == 1)
    return 0;
  if (n == 2)
    return 1;
  long long int ans =
      ((n - 1) % MOD) * ((solve1(n - 1) % MOD) + (solve1(n - 2) % MOD));
  return ans;
}
long long int solve2(int n, vector<long long int> &dp) {
  // base case
  if (n == 1)
    return 0;
  if (n == 2)
    return 1;
  if (dp[n] != -1)
    return dp[n];
  dp[n] = ((n - 1) *
           (((solve2(n - 1, dp) % MOD) + (solve2(n - 2, dp) % MOD)) % MOD));
  return dp[n];
}
long long int solve3(int n) {
  vector<long long int> dp(n + 1, 0);
  dp[1] = 0;
  dp[2] = 1;
  for (int i = 3; i <= n; i++) {
    long long int first = dp[i - 1] % MOD;
    long long int second = dp[i - 2] % MOD;
    long long int sum = (first + second) % MOD;
    long long int ans = ((i - 1) * sum) % MOD;
    dp[i] = ans;
  }
  return dp[n];
}

long long int solve4(int n) {
  long long int prev1 = 1;
  long long int prev2 = 0;
  for (int i = 3; i <= n; i++) {
    long long int sum = (prev1 + prev2) % MOD;
    long long ans = ((i - 1) * sum) % MOD;
    prev2 = prev1;
    prev1 = ans;
  }
  return prev1;
}

long long int countDerangements(int n) {
  //   long long int ans = solve1(n);
  //   return ans;
  //----------------------------
  //   vector<long long int> dp(n + 1, -1);
  //   return solve2(n, dp) % MOD;
  //----------------------------------
  //   return solve3(n);
  //---------------------------------
  //   return solve4(n);
}