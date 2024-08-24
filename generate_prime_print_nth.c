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




#include <stdio.h>

int isPrime(int num) {
    if (num <= 1)
        return 0; // 0 and 1 are not prime numbers

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; // Not a prime number if it's divisible by any number other than 1 and itself
    }

    return 1; // If no divisor found, it's a prime number
}

int main() {
    int n, count = 0, num = 2; // Starting from 2, which is the first prime number

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The %dth prime number is: ", n);

    while (count < n) {
        if (isPrime(num)) {
            count++;
            if (count == n) {
                printf("%d\n", num); // Print the nth prime number
                break;
            }
        }
        num++;
    }

    return 0;
}