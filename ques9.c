#include <stdio.h>

int main() {
    int arr[] = {56, 34, 99, 72, 99, 88, 99}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 99;
    int i;
    int foundIndex = -1;

    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            foundIndex = i;
            break; 
        }
    }

    if (foundIndex != -1) {
        printf("First occurrence of %d found at index %d.\n", target, foundIndex);
    } else {
        printf("%d not found in the array.\n", target);
    }

    return 0;
}
