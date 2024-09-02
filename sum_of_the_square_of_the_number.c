#include <stdio.h>

int main() {
    int number, sum = 0, i = 1;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    while (i <= number) {
        sum += i * i;
        i++;
    }

    
    printf("Sum of the squares of numbers up to %d is: %d\n", number, sum);

    return 0;
}

