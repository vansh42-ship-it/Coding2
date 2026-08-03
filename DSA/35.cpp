#include <iostream>
using namespace std;

// void singNum(int n, string arr[]) {
//   int digit = n % 10;

//   if (n == 0) {
//     return;
//   }
//   n = n / 10;

//   singNum(n, arr);
//   cout << arr[digit] << " ";
// }
bool isSorted(int arr[], int n) {
  if (n == 1 || n == 0) {
    return true;
  }
  if (arr[0] > arr[1]) {
    return false;
  } else {
    bool remainingPart = isSorted(arr + 1, n - 1);
    return remainingPart;
  }
}
int main() {
  // int n;
  // cout << "Type the number: ";
  // cin >> n;
  // string arr[10] = {"zero", "one", "two",   "THree", "four",
  //                   "five", "six", "seven", "eight", "nine"};
  // singNum(n, arr);
  // return 0;
  int arr[5] = {1, 2, 3, 4, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << isSorted(arr, n);
}
