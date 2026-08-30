#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.length();
  int k = 0;
  char arr[5] = {'h', 'e', 'l', 'l', 'o'};
  for (int i = 0; i < n; i++) {
    if (k < 5 && s[i] == arr[k]) {
      k++;
    }
  }
  if (k == 5) {
    cout << "YES" << endl;
    return 0;
  }
  cout << "NO" << endl;
  return 0;
}