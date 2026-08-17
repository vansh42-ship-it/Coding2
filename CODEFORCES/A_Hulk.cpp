#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s1 = "I hate that ";
  string s2 = "I love that ";
  for (int i = 1; i < n; i++) {
    if (i % 2 == 0) {
      cout << s2;
    } else {
      cout << s1;
    }
  }
  if (n % 2 == 0) {
    cout << "I love it";
  } else {
    cout << "I hate it";
  }
  return 0;
}