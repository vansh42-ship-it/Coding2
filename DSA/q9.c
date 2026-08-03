#include <stdio.h>
#include <stdlib.h>

int findMissing(int arr[], int n) {
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        actualSum += arr[i];
    }
    return expectedSum - actualSum;
}

int main() {
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter %d elements (range 0 to %d): ", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int missing = findMissing(arr, n);
    printf("The missing number is: %d\n", missing);

    free(arr);
    return 0;
}