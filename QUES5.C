#include <stdio.h>

int main() {
    float x, y;

    
    printf("Enter the X-coordinate: ");
    if (scanf("%f", &x) != 1) {
        printf("Invalid input for X-coordinate.\n");
        return 1;
    }

 
    if (scanf("%f", &y) != 1) {
        printf("Invalid input for Y-coordinate.\n");
        return 1;
    }
    
    printf("\nCoordinate Point: (%.2f, %.2f)\n", x, y);
    

    if (x == 0 && y == 0) {
        printf("The point lies at the **Origin**.\n");
    }
   
    else if (x == 0) {
        printf("The point lies on the **Y-axis**.\n");
    } 
    else if (y == 0) {
        printf("The point lies on the **X-axis**.\n");
    } 
    
    else if (x > 0 && y > 0) {
        printf("The point lies in **Quadrant I** (+, +).\n");
    } 
    
    else if (x < 0 && y > 0) {
        printf("The point lies in **Quadrant II** (-, +).\n");
    } 
    
    else if (x < 0 && y < 0) {
        printf("The point lies in **Quadrant III** (-, -).\n");
    } 
    
    else { 
        printf("The point lies in **Quadrant IV** (+, -).\n");
    }

    return 0;
}