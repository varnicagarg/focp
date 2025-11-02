#include <stdio.h>

void rotateClockwiseByOne(int arr[], int n) {
    int last = arr[n - 1]; 
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    
    
    arr[0] = last;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    rotateClockwiseByOne(arr1, n1);
    printf("Rotated array 1: ");
    printArray(arr1, n1);

    int arr2[] = {2, 3, 4, 5, 1};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    rotateClockwiseByOne(arr2, n2);
    printf("Rotated array 2: ");
    printArray(arr2, n2);

    return 0;
}
