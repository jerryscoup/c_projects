#include <stdio.h>
#include <math.h>

void main() {
    int n, i;

    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Powers of %d:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ^ %d = %.0f\n", n, i, pow(n, i));
    }

    
}
