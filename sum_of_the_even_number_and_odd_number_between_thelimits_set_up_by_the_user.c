#include <stdio.h>

int main() {
    int lower_limit, upper_limit;
    int sum_even = 0, sum_odd = 0;

   
    printf("Enter the lower limit: ");
    scanf("%d", &lower_limit);
    printf("Enter the upper limit: ");
    scanf("%d", &upper_limit);

    
    for (int i = lower_limit; i <= upper_limit; i++) {
        if (i % 2 == 0) {
            sum_even += i; 
        } else {
            sum_odd += i; 
        }
    }

    
    printf("Sum of even numbers between %d and %d is: %d\n", lower_limit, upper_limit, sum_even);
    printf("Sum of odd numbers between %d and %d is: %d\n", lower_limit, upper_limit, sum_odd);

    return 0;
}