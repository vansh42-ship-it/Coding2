#include <iostream>
using namespace std;
#include <vector>

int main() {}
void insertionSort(int n, vector<int> &arr) {
  for (int i = 1; i < n; i++) {
    int temp = arr[i];
    int j = i - 1;

    // Shift elements to the right until correct position is found
    while (j >= 0 && arr[j] > temp) {
      arr[j + 1] = arr[j];
      j--;
    }

    // Place temp in its correct position
    arr[j + 1] = temp;
  }
}