#include <stdio.h>


int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int number;

  
    printf("Enter a number: ");
    scanf("%d", &number);

   
    printf("Fibonacci value for %d is: %d\n", number, fibonacci(number));

    return 0;
}
