#include <stdio.h>

int main() {
    int marks[] = {88, 99, 73, 99, 65, 99, 77};
    int n = sizeof(marks) / sizeof(marks[0]);
    int target = 99;
    int count = 0;
    
    printf("Students who scored %d are at positions: ", target);
    for (int i = 0; i < n; i++) {
        if (marks[i] == target) {
            printf("%d ", i);
            count++;
        }
    }
    
    if (count == 0) {
        printf("None");
    }
    
    printf("\nTotal number of students who scored %d: %d\n", target, count);
    
    return 0;
}
