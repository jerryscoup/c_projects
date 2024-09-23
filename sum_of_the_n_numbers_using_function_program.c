#include <stdio.h>

int sumOfN(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;

   
    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    int result = sumOfN(n);

    
    printf("Sum of first %d natural numbers is: %d\n", n, result);

    return 0;
}

