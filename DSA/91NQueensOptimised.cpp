#include <bits/stdc++.h>
using namespace std;

void addSolution(vector<vector<int>> &ans, vector<vector<int>> &board, int n) {
  vector<int> temp;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      temp.push_back(board[i][j]);
    }
  }
  ans.push_back(temp);
}
bool isSafe(int n, int col, int row, vector<vector<int>> &board,
            unordered_map<int, bool> &rowBool,
            unordered_map<int, bool> &uDiagonalBool,
            unordered_map<int, bool> &lDiagonalBool) {
  if (!rowBool[row] && !uDiagonalBool[n - 1 + col - row] &&
      !lDiagonalBool[col + row]) {
    return true;
  }
  return false;
}
void solve(int col, vector<vector<int>> &ans, vector<vector<int>> &board, int n,
           unordered_map<int, bool> &rowBool,
           unordered_map<int, bool> &uDiagonalBool,
           unordered_map<int, bool> &lDiagonalBool) {
  if (col == n) {
    addSolution(ans, board, n);
    return;
  }
  for (int row = 0; row < n; row++) {
    if (isSafe(n, col, row, board, rowBool, uDiagonalBool, lDiagonalBool)) {
      board[row][col] = 1;
      rowBool[row] = true;
      lDiagonalBool[col + row] = true;
      uDiagonalBool[n - 1 + col - row] = true;
      solve(col + 1, ans, board, n, rowBool, uDiagonalBool, lDiagonalBool);
      board[row][col] = 0;
      rowBool[row] = false;
      lDiagonalBool[col + row] = false;
      uDiagonalBool[n - 1 + col - row] = false;
    }
  }
}

vector<vector<int>> nQueens(int n) {
  vector<vector<int>> board(n, vector<int>(n, 0));
  vector<vector<int>> ans;
  vector<bool> rowBool(n, false);
  vector<bool> uDiagonalBool(2 * n - 1, false);
  vector<bool> lDiagonalBool(2 * n - 1, false);

  solve(0, ans, board, n, rowBool, uDiagonalBool, lDiagonalBool);
  return ans;
}