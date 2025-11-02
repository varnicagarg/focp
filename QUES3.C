#include <stdio.h>


int subtract(int a, int b) {
    
    while (b != 0) {
        
        unsigned borrow = (~a) & b;
        a = a ^ b;           
        b = borrow << 1;     
    }
    return a;
}

int main() {
    int x = 15;
    int y = 7;
    printf("Subtraction result: %d\n", subtract(x, y)); 
    return 0;
}
