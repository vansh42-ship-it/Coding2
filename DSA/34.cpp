#include <iostream>
using namespace std;

// int factorial(int n) {
//   if (n == 0) {
//     return 1;
//   }
//   return n * factorial(n - 1);
// }
void count(int n) {
  if (n == 0) {
    cout << 0;
    return;
  } else {
    cout << n;
  }
  return count(n - 1);
}

int main() {
  //   // Factorial
  //   int n;
  //   cin >> n;

  //   int ans = factorial(n);

  //   cout << ans << endl;

  int k;
  cin >> k;
  count(k);
  return 0;
}