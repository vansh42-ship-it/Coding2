#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

// THIS METHOD IS RECURSION AND IT WILL TLE BCZ THERE ARE MANY OVERLAPPING
// SUBPROBLEMS WHICH WE ARE SOLVING AGAIN AND AGAIN

/*
---------------------------------------------------------
int solve(int nStairs, int i){
    if(i==nStairs)return 1;
    if(i>nStairs){
        return 0;
    }
    return (solve(nStairs,i+1)+solve(nStairs,i+2));
}

int countDistinctWays(int nStairs) {
    int ans = solve(nStairs,0);
    return ans;
}
-----------------------------------------------------------
*/

// Q MINIUMUM COST CLIMBING STAIRS
//---------------------------------------------------------

// class Solution {
// public:
//   int solve(vector<int> &cost, int n) {
//     if (n == 0) {
//       return cost[0];
//     }
//     if (n == 1) {
//       return cost[1];
//     }
//     int ans = cost[n] + min(solve(cost, n - 1), solve(cost, n - 2));
//     return ans;
//   }

//   int minCostClimbingStairs(vector<int> &cost) {
//     int n = cost.size();
//     int ans = min(solve(cost, n - 1), solve(cost, n - 2));
//     return ans;
//   }
// };

//-------------------------------------------------------------
// NOW USING DP

class Solution {
public:
  int solve2(vector<int> &cost, int n, vector<int> &dp) {
    // BASE CASE
    if (n == 0) {
      return cost[0];
    }
    if (n == 1) {
      return cost[1];
    }
    // step3:
    if (dp[n] != -1) {
      return dp[n];
    }
    // step2:
    dp[n] = cost[n] + min(solve2(cost, n - 1, dp), solve2(cost, n - 2, dp));
    return dp[n];
  }
  int solve3(vector<int> &cost, int n) {
    vector<int> dp(n + 1, -1);
    // step2:
    dp[0] = cost[0];
    dp[1] = cost[1];
    // 3rd step
    for (int i = 2; i < n; i++) {
      dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
    }
    return min(dp[n - 1], dp[n - 2]);
  }
  int minCostClimbingStairs(vector<int> &cost) {
    // int n = cost.size();
    // vector<int> dp(n + 1, -1);
    // // step1
    // int ans = min(solve2(cost, n - 1, dp), solve2(cost, n - 2, dp));\

    //------------------------------------------------------------------
    // BOTTOM UP APPROACH(TABULATION METHOD)
    int n = cost.size();
    return solve3(cost, n);
  }
};