#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  int tX = 0;
  int tY = 0;
  int tZ = 0;
  int x, y, z;
  vector<vector<int>> ans;
  for (int i = 0; i < n; i++) {
    cin >> x >> y >> z;
    tX += x;
    tY += y;
    tZ += z;
  }
  if (tX == 0 && tY == 0 && tZ == 0) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}