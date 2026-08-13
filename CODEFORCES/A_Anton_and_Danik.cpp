#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;
  int t = 0;
  for (char c : s) {
    if (c == 'A') {
      t++;
    } else {
      t--;
    }
  }
  if (t > 0) {
    cout << "Anton";
  } else if (t < 0) {
    cout << "Danik";
  } else {
    cout << "Friendship";
  }
  return 0;
}