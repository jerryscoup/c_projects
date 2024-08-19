#include <stdio.h>

void main() {
    int lower_limit, upper_limit, sum = 0, i;

    
    printf("Enter the lower limit: ");
    scanf("%d", &lower_limit);

    
    printf("Enter the upper limit: ");
    scanf("%d", &upper_limit);

    
        for (i = lower_limit; i <= upper_limit; i++) {
        sum += i;
    }

    
    printf("Sum of numbers between %d and %d is: %d\n", lower_limit, upper_limit, sum);

    
}
