#include <iostream>
using namespace std;

void sortOneTwo(int arr[], int n) {
  int i = 0, j = n - 1, mid = 0;

  while (mid <= j) {
    if (arr[mid] == 0) {
      swap(arr[mid], arr[i]);
      i++;
      mid++;
    } else if (arr[mid] == 2) {
      swap(arr[mid], arr[j]);
      j--;
      // no mid++ here ✅
    } else { // arr[mid] == 1
      mid++;
    }
  }

  for (int k = 0; k < n; k++) {
    cout << arr[k] << " ";
  }
}

int main() {
  int arr[10] = {0, 1, 2, 0, 2, 0, 0, 0, 0, 1};
  sortOneTwo(arr, 10);
  return 0;
}
