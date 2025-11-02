#include <stdio.h>

int main() {
    int arr[] = {2, 10, 10, 100, 2, 10, 11, 2, 11, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int printed;

    printf("Duplicate elements: ");
    printed = 0;

    for (int i = 0; i < n; i++) {
        int count = 0;
        int alreadyPrinted = 0;

       
        for (int k = 0; k < i; k++) {
            if (arr[k] == arr[i]) {
                alreadyPrinted = 1;
                break;
            }
        }
        if (alreadyPrinted) continue;

       
        for (int j = i + 1; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }

        if (count > 0) {
            printf("%d ", arr[i]);
            printed = 1;
        }
    }

    if (!printed) {
        printf("-1");
    }

    printf("\n");
    return 0;
}
