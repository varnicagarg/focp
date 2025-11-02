#include <stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertAtPosition(int arr[], int *n, int element, int position) {
    // Shift elements to the right from position
    for (int i = *n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    (*n)++;
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5;
    int element, position;

    printf("Original array: ");
    printArray(arr, n);

    
    element = 10;
    position = 0;
    insertAtPosition(arr, &n, element, position);
    printf("After inserting %d at the front: ", element);
    printArray(arr, n);

    
    element = 20;
    position = n / 2;
    insertAtPosition(arr, &n, element, position);
    printf("After inserting %d at the middle: ", element);
    printArray(arr, n);

    
    element = 30;
    position = n;
    insertAtPosition(arr, &n, element, position);
    printf("After inserting %d at the end: ", element);
    printArray(arr, n);

    return 0;
}

