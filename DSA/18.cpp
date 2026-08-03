#include <iostream>
using namespace std;

int main() {
  int arr[5] = {1, 4, 2, 9, 3};
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
  for (int i = 0; i < 5; i++) {
    cout << arr[i];
  }
}