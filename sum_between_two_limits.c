#include <stdio.h>

int main() {
    int lowerLimit, upperLimit;
    int sum = 0;

    
    printf("Enter the lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter the upper limit: ");
    scanf("%d", &upperLimit);

    
    int currentNumber = lowerLimit;
    while (currentNumber <= upperLimit) {
        sum += currentNumber;
        currentNumber++;
    }

    
    printf("Sum of numbers between %d and %d is: %d\n", lowerLimit, upperLimit, sum);

    return 0;
}







