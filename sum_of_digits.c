#include <stdio.h>

void main() {
    int number, sum = 0, digit;

    
    printf("Enter the number: ");
    scanf("%d", &number);

    
    while (number > 0) {
        
        digit = number % 10;
        
        sum += digit;
        
        number /= 10;
    }

    
    printf("Sum of digits: %d\n", sum);

    
}
