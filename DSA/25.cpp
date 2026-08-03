#include <iostream>
using namespace std;

// bool isPresent(int arr[][4], int n) {
//   for (int i = 0; i < 3; i++) {
//     for (int j = 0; j < 4; j++) {
//       if (arr[i][j] == n) {
//         return true;
//       }
//     }
//   }
//   return false;
// }

int main() {
  int arr[3][4] = {{19, 1, 4, 1}, {2, 8, 2, 2}, {3, 3, 6, 3}};
  //   for (int i = 0; i < 3; i++) {
  //     for (int j = 0; j < 4; j++) {
  //       cin >> arr[i][j];
  //     }
  //   }
  //   for (int i = 0; i < 4; i++) {
  //     for (int j = 0; j < 3; j++) {
  //       cin >> arr[j][i];
  //     }
  //   }
  //   for (int i = 0; i < 3; i++) {
  //     for (int j = 0; j < 4; j++) {
  //       cout << arr[i][j] << " ";
  //     }
  //     cout << endl;
  //   }

  //   int target = 0;
  //   cout << "Enter element to be searched: ";
  //   cin >> target;
  //   if (isPresent(arr, target)) {
  //     cout << "YES";
  //   } else {
  //     cout << "NO";
  //   }
  int temp = 0;
  int arr2[4] = {0};
  for (int i = 0; i < 4; i++) {
    int sum = 0;
    for (int j = 0; j < 3; j++) {
      sum += arr[j][i];
    }
    arr2[i] = sum;

    if (sum > temp) {
      temp = sum;
    }
  }
  cout << temp;
}