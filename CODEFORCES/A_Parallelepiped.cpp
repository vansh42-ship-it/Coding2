#include <bits/stdc++.h>
using namespace std;

int main() {
  int a1, a2, a3;
  cin >> a1 >> a2 >> a3;
  float x, y, z;
  x = sqrt((a1 * a3) / a2);
  y = a1 / x;
  z = a3 / x;
  cout << 4 * (x + y + z) << endl;
  return 0;
}