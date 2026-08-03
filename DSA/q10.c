#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void findTwoSum(int numbers[], int n, int target) {
    qsort(numbers, n, sizeof(int), compare);

    int left = 0;
    int right = n - 1;

    while (left < right) {
        int currentSum = numbers[left] + numbers[right];

        if (currentSum == target) {
            printf("[%d, %d]\n", left + 1, right + 1);
            return;
        } else if (currentSum < target) {
            left++;
        } else {
            right--;
        }
    }

    printf("No such pair found.\n");
}

int main() {
    int n, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *numbers = (int *)malloc(n * sizeof(int));
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Enter target value: ");
    scanf("%d", &target);

    findTwoSum(numbers, n, target);

    free(numbers);
    return 0;
}