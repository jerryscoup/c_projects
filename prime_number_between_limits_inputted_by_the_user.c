#include <stdio.h>

int main() {
    int lower_limit, upper_limit, i, j, is_prime;

    printf("Enter the lower limit: ");
    scanf("%d", &lower_limit);
    printf("Enter the upper limit: ");
    scanf("%d", &upper_limit);

    printf("Prime numbers between %d and %d are:\n", lower_limit, upper_limit);

   
    for (i = lower_limit; i <= upper_limit; i++) {
        
        if (i < 2) {
            continue;
        }

        is_prime = 1; 

     
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0; 
                break;
            }
        }

     
        if (is_prime) {
            printf("%d\n", i);
        }
    }

    return 0;
}
