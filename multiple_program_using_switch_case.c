#include <stdio.h>


int isArmstrong(int number) {
    int originalNumber = number;
    int sum = 0;
    int digitCount = 0;

   
    while (originalNumber != 0) {
        originalNumber /= 10;
        digitCount++;
    }

    originalNumber = number;

    
    while (originalNumber != 0) {
        int digit = originalNumber % 10;
        sum += pow(digit, digitCount);
        originalNumber /= 10;
    }

    return (sum == number);
}


int factorial(int number) {
    int result = 1;
    for (int i = 2; i <= number; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int choice, number, number1, number2;

    
    printf("Menu:\n");
    printf("1. Check Armstrong Number\n");
    printf("2. Calculate Factorial\n");
    printf("3. Check Equality of Two Numbers\n");
    printf("4. Check Prime Number\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            
            printf("Enter a number: ");
            scanf("%d", &number);
            if (isArmstrong(number))
                printf("%d is an Armstrong number.\n", number);
            else
                printf("%d is not an Armstrong number.\n", number);
            break;

        case 2:
            
            printf("Enter a number: ");
            scanf("%d", &number);
            printf("Factorial of %d is: %d\n", number, factorial(number));
            break;

        case 3:
            
            printf("Enter two numbers: ");
            scanf("%d %d", &number1, &number2);
            if (number1 == number2)
                printf("Numbers are equal.\n");
            else
                printf("Numbers are not equal.\n");
            break;

        case 4:
            
            printf("Enter a number: ");
            scanf("%d", &number);
            int isPrime = 1;
            if (number <= 1)
                isPrime = 0;
            else {
                for (int i = 2; i <= number / 2; i++) {
                    if (number % i == 0) {
                        isPrime = 0;
                        break;
                    }
                }
            }
            if (isPrime)
                printf("%d is a prime number.\n", number);
            else
                printf("%d is not a prime number.\n", number);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

