#include <stdio.h>

int main() {
    int scores[] = {56, 73, 99, 84, 67, 90, 33};
    int n = sizeof(scores) / sizeof(scores[0]);
    
    int even_array[n]; 
    int odd_array[n]; 
    int even_count = 0, odd_count = 0;
    
    for (int i = 0; i < n; i++) {
        if (scores[i] % 2 == 0) {
            even_array[even_count++] = scores[i];
        } else {
            odd_array[odd_count++] = scores[i];
        }
    }
    
    printf("Even scores: ");
    for (int i = 0; i < even_count; i++) {
        printf("%d ", even_array[i]);
    }
    printf("\n");
    
    printf("Odd scores: ");
    for (int i = 0; i < odd_count; i++) {
        printf("%d ", odd_array[i]);
    }
    printf("\n");

    return 0;
}
