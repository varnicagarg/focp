#include <stdio.h>

int hcf_iterative(int a, int b) {
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    printf("HCF (Iterative) of %d and %d is %d\n", num1, num2, hcf_iterative(num1, num2));
    return 0;
}