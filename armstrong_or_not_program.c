#include <stdio.h>
#include <math.h>

int isArmstrong(int number) {
    int originalNumber, remainder, result = 0, n = 0;

    
    originalNumber = number;

    
    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    if (result == number)
        return 1; 
    else
        return 0; 
}

int main() {
    int number;

   
    printf("Enter a number: ");
    scanf("%d", &number);

    
    if (isArmstrong(number))
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}

























