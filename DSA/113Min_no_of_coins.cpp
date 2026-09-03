#include <bits/stdc++.h>
using namespace std;

int solve1(vector<int> &num, int x) {
  // Base case
  if (x == 0) {
    return 0;
  }
  if (x < 0) {
    return INT_MAX;
  }

  int mini = INT_MAX;
  for (int i = 0; i < num.size(); i++) {
    int ans = solve1(num, x - num[i]);
    if (ans != INT_MAX) {
      mini = min(mini, 1 + ans);
    }
  }
  return mini;
}
int solve2(vector<int> &num, int x, vector<int> &dp) {
  // Base case
  if (x == 0) {
    return 0;
  }
  if (x < 0) {
    return INT_MAX;
  }
  if (dp[x] != -1) {
    return dp[x];
  }
  int mini = INT_MAX;
  for (int i = 0; i < num.size(); i++) {
    int ans = solve2(num, x - num[i], dp);
    if (ans != INT_MAX) {
      mini = min(mini, 1 + ans);
    }
  }
  dp[x] = mini;
  return mini;
}
int solve3(vector<int> &num, int x) {
  vector<int> dp(x + 1, INT_MAX);
  dp[0] = 0;
  for (int i = 1; i <= x; i++) {
    // i m trying to solve for every amount from 1 to x
    for (int j = 0; j < num.size(); j++) {
      if (i - num[j] >= 0 && dp[i - num[j]] != INT_MAX) {
        dp[i] = min(dp[i], 1 + dp[i - num[j]]);
      }
    }
  }
  if (dp[x] == INT_MAX) {
    return -1;
  }
  return dp[x];
}

int minimumElements(vector<int> &num, int x) {
  // ========================================
  //   //Solving using recursion only NO USING OF DP
  //   int ans = solve1(num,x);
  //   return ans==INT_MAX?-1:ans;
  //   //ANS TLED
  // ---------------------------------------
  // //===========================================
  //   //Using DP Top-Bottom approach Recursion_memoization
  //   vector<int> dp(x+1,-1);
  //   int ans = solve2(num,x,dp);
  //   if(ans==INT_MAX)return -1;
  //   return ans;
  // //------------------------------------------
  // //============================================
  //   // Using bottom-up approach -> tabulation method
  //   return solve3(num, x);
  // //-----------------------------------------------
}