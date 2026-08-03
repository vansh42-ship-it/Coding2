#include <iostream>
using namespace std;

// void reverseString(int i, int j, string &name) {
//   //   cout << "call recieved for " << name << endl;

//   // base case
//   if (i > j) {
//     return;
//   }
//   swap(name[i], name[j]);
//   i++;
//   j--;
//   reverseString(i, j, name);
// }
// bool checkPalindrome(string &name, int i, int j) {
//   if (i > j) {
//     return true;
//   }
//   if (name[i] == name[j]) {
//     i++;
//     j--;
//     checkPalindrome(name, i, j);
//   } else {
//     return false;
//   }
// }
// int power(int a, int b) {
//   if (b == 0) {
//     return 1;
//   }
//   if (b == 1) {
//     return a;
//   }
//   int ans = power(a, b / 2);
//   if (b % 2 == 0) {
//     return ans * ans;
//   } else {
//     return a * ans * ans;
//   }
// }
void sortArray(int arr[], int n) {
  if (n == 0 || n == 1) {
    return;
  }

  for (int i = 0; i < n - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      swap(arr[i], arr[i + 1]);
    }
  }

  sortArray(arr, n - 1);
}
void insert(int arr[], int n) {
  int temp = arr[n];
  int j = n - 1;
  while (j >= 0 && arr[j] > temp) {
    arr[j + 1] = arr[j];
    j--;
  }
  arr[j + 1] = temp;
}
void insertionSort(int arr[], int n) {
  if (n == 0 || n == 1) {
    return;
  }
  insertionSort(arr, n - 1);

  insert(arr, n - 1);
}
void selectionSort(int arr[], int n) {
  if (n <= 1) {
    return;
  }
  int k = INT_MAX;
  int minIndex = -1;
  for (int i = 0; i < n; i++) {
    if (arr[i] < k) {
      k = arr[i];
      minIndex = i;
    }
  }
  swap(arr[0], arr[minIndex]);
  selectionSort(arr + 1, n - 1);
}
int main() {
  //   string name;

  //   cin >> name;
  //   string temp = name;
  //   cout << name << endl;
  //   int i = 0;
  //   int j = name.length() - 1;
  //   reverseString(i, j, name);
  //   cout << name << endl;
  //   cout << checkPalindrome(name, i, j);

  //   int a, b;
  //   cin >> a >> b;
  //   cout << power(a, b);

  // Bubble Sort
  int arr[5] = {2, 1, 6, 4, 9};
  //   sortArray(arr, 5);
  //   for (int i = 0; i < 5; i++) {
  //     cout << arr[i] << " ";
  //   }

  // Insertion Sort
  //   insertionSort(arr, 5);
  //   for (int i = 0; i < 5; i++) {
  //     cout << arr[i] << " ";
  //   }

  //   SELECTION SORT
  //   selectionSort(arr, 5);
  //   for (int i = 0; i < 5; i++) {
  //     cout << arr[i] << " ";
  //   }
}