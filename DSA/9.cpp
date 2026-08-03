#include <iostream>
using namespace std;
#include <climits>
#include <math.h>

int maxValue(int arra1[], int n) {
  int max = INT_MIN;

  for (int i = 0; i < n; i++) {
    if (arra1[i] > max) {
      max = arra1[i];
    }
  }
  return max;
}
// int reverseArr(int arr[], int n) {
//   int temp[n];
//   for (int i = 0; i < n; i++) {
//     temp[i] = arr[-i];
//   }
//   return temp[n];
// }
int main() {
  //   cout << arra[12];

  //   cout << sizeof(arra) / sizeof(int);

  //   cout << maxValue(arra, 15);
  //   int revarra[7] = reverseArr(arra, 7);
  //   int temp[7] = {0};
  //   for (int i = 0; i < 7; i++) {
  //     temp[i] = arra[6 - i];
  //   }
  //   for (int i = 0; i < 7; i++) {
  //     cout << temp[i] << " ";
  //   }
  int arra[7] = {1, 2, 3, 4, 5, 6, 7};
  int start = 0;
  int end = 6;
  while (start <= end) {
    if (start + 1 > end) {
      break;
    }
    swap(arra[start], arra[start + 1]);
    start += 2;
  }
  for (int i = 0; i < 7; i++) {
    cout << arra[i] << " ";
  }
}
