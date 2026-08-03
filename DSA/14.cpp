#include <iostream>
using namespace std;

// int getPivot(int arr[], int n) {
//   int s = 0;
//   int e = n - 1;
//   int mid = s + (e - s) / 2;
//   while (s < e) {
//     if (arr[mid] >= arr[0]) {
//       s = mid + 1;
//     } else {
//       e = mid;
//     }
//     mid = s + (e - s) / 2;
//   }
//   return s;
// }

double morePrecision(int n, int precision, int tempSol) {
  double factor = 1;
  double ans = tempSol;
  for (int i = 0; i < precision; i++) {
    factor = factor / 10;
    for (double j = 0; j * j < n; j = j + factor) {
      ans = j;
    }
  }
  return ans;
}
long long int floorSqrt(int n) {
  int s = 0;
  int e = n;
  long long int mid = s + (e - s) / 2;
  long long int ans = 0;
  while (s <= e) {
    long long int square = mid * mid;
    if (square == n) {
      ans = mid;
    }
    if (square > n) {
      e = mid - 1;
    } else {
      s = mid + 1;
      ans = mid;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}
int main() {
  //   int arr[5] = {9, 10, 17, 1, 3};
  //   cout << "Pivot is " << getPivot(arr, 5) << endl;

  int n;
  cout << "Enter the number ";
  cin >> n;
  long long int tempsol = floorSqrt(n);
  cout << "Answer is " << morePrecision(n, 3, tempsol);
  return 0;
}
