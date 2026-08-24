#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int rating;
    cin >> rating;
    if (rating <= 1399) {
      cout << "Division 4" << endl;
      continue;
    }
    if (rating <= 1599) {
      cout << "Division 3" << endl;
      continue;
    }
    if (rating <= 1899) {
      cout << "Division 2" << endl;
      continue;
    } else {
      cout << "Division 1" << endl;
      continue;
    }
  }
  return 0;
}