#include <iostream>
using namespace std;

bool evenodd(int n) {
  if (n % 2 == 0) {
    return true;
  } else {
    return false;
  }
}
float NCR(int n, int r) {
  float num = 1;
  for (int i = 1; i <= n; i++) {
    num = num * i;
  }
  float den1 = 1;
  for (int i = 1; i <= r; i++) {
    den1 = den1 * i;
  }
  float den2 = 1;
  for (int i = 1; i <= (n - r); i++) {
    den2 = den2 * i;
  }
  float ans = num / (den1 * den2);
  return ans;
}
bool isPrime(int n) {
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}
int countOne(int a) {
  int num = 0;
  while (a != 0) {
    if (a & 1 == 1) {
      num++;
    }
    a = a >> 1;
  }
  return num;
}
int setBits(int a, int b) {
  int num = 0;
  num += countOne(a);
  num += countOne(b);
  return num;
}
int main() {
  //   int num = 2;
  //   switch (num) {
  //   case 1:
  //     cout << "First" << endl;
  //     break;
  //   case 2:
  //     cout << "Second" << endl;
  //     break;
  //   default:
  //     cout << "Default" << endl;
  //   }
  //   char ch = 'a';
  //   switch (ch) {
  //   case 'a':
  //     cout << "First" << endl;
  //     break;
  //   case 'b':
  //     cout << "Second" << endl;
  //     break;
  //   default:
  //     cout << "Default" << endl;
  //   }

  //   int total = 1380;
  //   int n = total;
  //   int a = 0, b = 0, c = 0, d = 0;
  //   int choice = 1;
  //   while (n > 0 && choice <= 4) {
  //     switch (choice) {
  //     case 1:
  //       if (n >= 100) {
  //         a = n / 100;
  //         n = n % 100;
  //       }
  //       choice++;
  //       break;
  //     case 2:
  //       if (n >= 50) {
  //         b = n / 50;
  //         n = n % 50;
  //       }
  //       choice++;
  //       break;
  //     case 3:
  //       if (n >= 20) {
  //         c = n / 20;
  //         n = n % 20;
  //       }
  //       choice++;
  //       break;
  //     case 4:
  //       if (n >= 1) {
  //         d = n / 1;
  //         n = n % 1;
  //       }
  //       choice++;
  //       break;
  //     }
  //   }
  //   cout << a << b << c << d;

  //   int n;
  //   cin >> n;
  //   bool a = evenodd(n);
  //   if (a) {
  //     cout << "YES" << endl;
  //   } else {
  //     cout << "NO" << endl;
  //   }

  //   cout << NCR(8, 0) << endl;

  //   bool a = isPrime(9);
  //   cout << a << endl;

  //   cout << setBits(64, 15) << endl;
}
