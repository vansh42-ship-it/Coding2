#include <bits/stdc++.h>
using namespace std;

bool isSafe(int row, int col, vector<vector<int>> &sudoku, int k) {
  int n = sudoku.size();
  int startRow = row - row % 3;
  int startCol = col - col % 3;
  for (int i = 0; i < n; i++) {
    // row check
    if (sudoku[row][i] == k) {
      return false;
    }
    if (sudoku[i][col] == k) {
      return false;
    }
    if (sudoku[startRow + i / 3][startCol + i % 3] == k) {
      return false;
    }
  }
  return true;
}

bool solve(vector<vector<int>> &sudoku) {
  for (int row = 0; row < 9; row++) {
    for (int col = 0; col < 9; col++) {
      if (sudoku[row][col] == 0) {
        for (int k = 1; k <= 9; k++) {
          if (isSafe(row, col, sudoku, k)) {
            sudoku[row][col] = k;
            bool a = solve(sudoku);
            if (a) {
              return true;
            } else {
              sudoku[row][col] = 0;
            }
          }
        }
        return false;
      }
    }
  }
  return true;
}

void solveSudoku(vector<vector<int>> &sudoku) { bool a = solve(sudoku); }