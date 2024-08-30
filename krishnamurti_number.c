#include <stdio.h>
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}


int isKrishnamurthi(int number) {
    int originalNumber = number;
    int sum = 0;
    
    while (number != 0) {
        int digit = number % 10;
        sum += factorial(digit);
        number /= 10;
    }
    
    
    return (sum == originalNumber);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    
    if (isKrishnamurthi(number))
        printf("%d is a Krishnamurthi number.\n", number);
    else
        printf("%d is not a Krishnamurthi number.\n", number);

    return 0;
}

