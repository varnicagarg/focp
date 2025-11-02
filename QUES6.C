#include <stdio.h>
#include <math.h>


long long decimalToBinary(int decimalNumber);
int binaryToDecimal(long long binaryNumber);
void displayMenu();


long long decimalToBinary(int decimalNumber) {
    long long binaryNumber = 0;
    int remainder, i = 1;

    

    while (decimalNumber != 0) {
        
        remainder = decimalNumber % 2; 
        
        decimalNumber /= 2;
        
        binaryNumber += remainder * i;
        
      
        i *= 10; 
    }
    return binaryNumber;
}


int binaryToDecimal(long long binaryNumber) {
    int decimalNumber = 0, i = 0, remainder;
    
    

    while (binaryNumber != 0) {
       
        remainder = binaryNumber % 10; 
        
        
        binaryNumber /= 10;
        
        
        decimalNumber += remainder * pow(2, i);
        
        ++i; 
    }
    return decimalNumber;
}


void displayMenu() {
    printf("\n--- Number System Converter ---\n");
    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    printf("3. Exit\n");
    printf("Enter your choice (1, 2, or 3): ");
}

int main() {
    int choice;
    int decimalInput;
    long long binaryInput;

    do {
        displayMenu();
        if (scanf("%d", &choice) != 1) {
             
            printf("\nInvalid input. Please enter a number (1, 2, or 3).\n");
           
            while (getchar() != '\n');
            continue; 
        }

        switch (choice) {
            case 1:
                printf("Enter a positive decimal integer: ");
                scanf("%d", &decimalInput);
                if (decimalInput < 0) {
                    printf("Error: Please enter a positive integer.\n");
                    break;
                }
                long long binResult = decimalToBinary(decimalInput);
                printf("Decimal %d = Binary **%lld**\n", decimalInput, binResult);
                break;

            case 2:
                printf("Enter a binary integer (only 0s and 1s): ");
                scanf("%lld", &binaryInput);
                
                
                if (binaryInput < 0) {
                    printf("Error: Please enter a positive binary integer.\n");
                    break;
                }
                
                int decResult = binaryToDecimal(binaryInput);
                printf("Binary %lld = Decimal **%d**\n", binaryInput, decResult);
                break;

            case 3:
                printf("Exiting the program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please select 1, 2, or 3.\n");
        }
    } while (choice != 3);

    return 0;
}