#include <stdio.h>

void main() {
    int number;
    unsigned long long factorial = 1;

    
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    
    if (number < 0) {
        printf("Error! Factorial of a negative number doesn't exist.");
    } else {
        
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }
        
        printf("Factorial of %d = %llu", number, factorial);
    }

    
}




