#include <iostream>
using namespace std;

int main() {
  cout << "type ";
  long long binary;
  cin >> binary;
  int ans = 0;
  while (binary != 0) {
    if (binary & 1 == 0) {
      ans = 1 & 1 + ans;
    } else {
      ans = 1 & 0 + ans;
    }
    binary = binary >> 1;
  }
  cout << "Answer is " << ans << endl;
}