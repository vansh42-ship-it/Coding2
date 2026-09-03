#include <bits/stdc++.h>
using namespace std;

int main() {
  int m, n;
  cin >> m >> n;
  for (int i = 0; i < m; i++) {
    string temp;
    cin >> temp;
    for (int j = 0; j < n; j++) {
      if (temp[j] == '.') {
        if ((i + j) % 2 == 0) {
          temp[j] = 'B';
        } else {
          temp[j] = 'W';
        }
      }
    }
    cout << temp << endl;
  }
  return 0;
}