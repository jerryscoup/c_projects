#include <stdio.h>

int main() {
    int number, originalNumber, reverseNumber = 0, remainder;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number; 

    
    while (number != 0) {
        remainder = number % 10;
        reverseNumber = reverseNumber * 10 + remainder;
        number /= 10;
    }

    
    if (originalNumber == reverseNumber)
        printf("%d is a palindrome number.\n", originalNumber);
    else
        printf("%d is not a palindrome number.\n", originalNumber);

    return 0;
}





