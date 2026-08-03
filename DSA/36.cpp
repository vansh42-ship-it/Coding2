#include <iostream>
using namespace std;

// int getSum(int arr[], int n) {
//   if (n == 0) {
//     return 0;
//   }
//   if (n == 1) {
//     return arr[0];
//   }
//   int remainingPart = getSum(arr + 1, n - 1);
//   int sum = arr[0] + remainingPart;
//   return sum;
// }
// bool searchKey(int arr[], int k, int n) {
//   if (n == 0) {
//     return false;
//   }
//   if (arr[0] == k) {
//     return true;
//   }
//   return searchKey(arr + 1, k, n - 1);
// }
void print(int arr[], int s, int e) {
  for (int i = s; i <= e; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
bool binarySearch(int *arr, int s, int e, int k) {

  if (s > e) {
    return false;
  }
  print(arr, s, e);
  int mid = s + (e - s) / 2;
  if (arr[mid] == k) {
    return true;
  } else if (arr[mid] > k) {
    return binarySearch(arr, s, mid - 1, k);
  } else {
    return binarySearch(arr, mid + 1, e, k);
  }
}
int main() {
  //   int arr[5] = {1, 2, 3, 4, 5};
  //   int n = sizeof(arr) / sizeof(arr[0]);

  //   cout << "Sum is: " << getSum(arr, n);

  //   int arr[5] = {2, 6, 24, 54, 21};
  //   int n = 5;
  //   int k = 21;
  //   cout << "Key is present(1) or not(0): " << searchKey(arr, k, n);

  int arr[5] = {2, 6, 12, 19, 21};
  int n = 5;
  int k = 1;
  cout << "Key is present(1) or not(0): " << binarySearch(arr, 0, n - 1, k);
}