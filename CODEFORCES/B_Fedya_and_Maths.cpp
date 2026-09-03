#include <iostream>
#include <string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string n;
  cin >> n;
  int len = n.length();
  int last_two_digits = 0;
  if (len == 1) {
    last_two_digits = n[0] - '0';
  } else {
    last_two_digits = (n[len - 2] - '0') * 10 + (n[len - 1] - '0');
  }
  if (last_two_digits % 4 == 0) {
    cout << 4 << "\n";
  } else {
    cout << 0 << "\n";
  }

  return 0;
}
