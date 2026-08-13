#include <bits/stdc++.h>
using namespace std;

int main() {
  string a;
  cin >> a;
  int count = 0;
  for (char c : a) {
    if (c == '4' || c == '7') {
      count++;
    }
  }
  if (count == 0) {
    cout << "NO";
    return 0;
  }
  while (count != 0) {
    int dig = count % 10;
    if (dig != 4 && dig != 7) {
      cout << "NO";
      return 0;
    }
    count /= 10;
  }
  cout << "YES";
  return 0;
}