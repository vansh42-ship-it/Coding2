#include <bits/stdc++.h>
using namespace std;
void solve(int x, int y, vector<vector<int>> &arr, int n, vector<string> &ans,
           vector<vector<bool>> &visited, string path) {
  if (x == n - 1 && y == n - 1) {
    ans.push_back(path);
    return;
  }
  // movement
  vector<tuple<int, int, string>> directions = {
      {1, 0, "D"}, {0, 1, "R"}, {0, -1, "L"}, {-1, 0, "U"}};
  visited[x][y] = true;
  for (auto &dir : directions) {
    int newX = x + get<0>(dir);
    int newY = y + get<1>(dir);
    if (newX >= 0 && newX < n && newY >= 0 && newY < n &&
        visited[newX][newY] == false && arr[newX][newY] == 1) {
      solve(newX, newY, arr, n, ans, visited, path + get<2>(dir));
    }
  }
  visited[x][y] = false;
}
vector<string> searchMaze(vector<vector<int>> &arr, int n) {
  vector<vector<bool>> visited(n, vector<bool>(n, false));
  string path = "";
  vector<string> ans;
  solve(0, 0, arr, n, ans, visited, path);
  return ans;
}