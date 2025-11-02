#include <stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100] = {10, 20, 1, 2, 3, 4, 5, 30};
    int n = 8;

    printf("Original array: ");
    printArray(arr, n);

    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("After deleting element from the front: ");
    printArray(arr, n);

   
    int mid = n / 2;
    for (int i = mid; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("After deleting element from the middle: ");
    printArray(arr, n);

    n--;
    printf("After deleting element from the end: ");
    printArray(arr, n);

    return 0;
}
