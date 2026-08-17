#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, n1, n2, n3;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> n1 >> n2 >> n3;
    if (n1 + n2 == n3) {
      cout << "+" << endl;
    } else {
      cout << "-" << endl;
    }
  }
  return 0;
}