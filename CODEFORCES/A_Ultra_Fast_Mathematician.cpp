#include <bits/stdc++.h>
using namespace std;

int main() {
  string n1, n2;
  cin >> n1 >> n2;
  string ans = "";
  for (int i = 0; i < n1.length(); i++) {
    char c1 = n1[i];
    char c2 = n2[i];
    if (c1 == c2) {
      cout << '0';
    } else {
      cout << '1';
    }
  }

  return 0;
}