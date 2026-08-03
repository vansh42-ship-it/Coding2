#include <array>
#include <iostream>
#include <vector>

using namespace std;

// //REVERSE OF VECTOR
// void reverse(vector<int> &v) {
//   int s = 0;
//   int e = v.size() - 1;
//   while (s <= e) {
//     swap(v[s], v[e]);
//     s++;
//     e--;
//   }
//   for (int i = 0; i < v.size(); i++) {
//     cout << v[i] << " ";
//   }
// }
void merge(int arr1[], int n, int arr2[], int m, int arr3[]) {
  int i = 0;
  int j = 0;
  int k = 0;
  while (i < n && j < m) {
    if (arr1[i] < arr2[j]) {
      arr3[k] = arr1[i];
      if (i < n - 1) {
        i++;
        k++;
      } else {
        k++;
        arr1[i] = 99999;
      }
    } else if (arr1[i] == arr2[j]) {
      arr3[k] = arr1[i];
      k++;
      arr3[k] = arr2[j];
      i++;
      j++;
      k++;
    } else if (arr1[i] > arr2[j]) {
      arr3[k] = arr2[j];
      if (j < m - 1) {
        j++;
        k++;
      } else {
        k++;
        arr2[j] = 99999;
      }
    }
  }
  for (int i = 0; i < n + m; i++) {
    cout << arr3[i] << " ";
  }
}

int main() {
  //   vector<int> v;
  //   v.push_back(1);
  //   v.push_back(11);
  //   v.push_back(14);
  //   v.push_back(167);
  //   v.push_back(123);

  //   reverse(v);

  // //MERGE SORTED ARRAY

  int arr1[5] = {1, 4, 5, 7, 11};
  int arr2[4] = {2, 4, 6, 56};
  int arr3[9] = {0};
  merge(arr1, 5, arr2, 4, arr3);
  //   print(arr3, 8);
  return 0;
}