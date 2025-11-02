#include <stdio.h>

int main() {
    int i, j, n = 5;
    int spaces = 8; 

    for (i = 0; i < n; i++) {
        
        for (j = 0; j <= i; j++) {
            if (j % 2 == 0)
                printf("0");
            else
                printf("1");
        }
        

        for (j = 1; j <= spaces; j++)
            printf(" ");

        spaces -= 2; 
        for (j = 0; j <= i; j++) {
            if (j % 2 == 0)
                printf("0");
            else
                printf("1");
        }
        
        printf("\n");
    }
    return 0;
}
