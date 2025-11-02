#include <stdio.h>

void swap_temp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
