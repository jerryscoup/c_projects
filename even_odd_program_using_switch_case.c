#include <stdio.h>

int main() {
    int number;
    
    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    int remainder = number % 2;

    
    switch (remainder) {
        case 0:
            printf("%d is even.\n", number);
            break;
        case 1:
        case -1: 
            printf("%d is odd.\n", number);
            break;
        default:
            printf("Invalid input.\n");
    }

    return 0;
}

