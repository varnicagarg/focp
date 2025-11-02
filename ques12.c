#include <stdio.h>

int main() {
    int scores[] = {56, 73, 99, 84, 67, 90, 33};
    int n = sizeof(scores) / sizeof(scores[0]);
    
    int max = scores[0];
    int min = scores[0];
    
    for (int i = 1; i < n; i++) {
        if (scores[i] > max) {
            max = scores[i];
        }
        if (scores[i] < min) {
            min = scores[i];
        }
    }
    
    printf("Maximum score: %d\n", max);
    printf("Minimum score: %d\n", min);
    
    return 0;
}
