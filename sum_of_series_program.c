#include <stdio.h>

int main() {
    int n, sum = 0;

    
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Series: ");
    for (int i = 1; i <= n; i++) {
        int term = 2 * i - 1; 
        printf("%d", term);
        sum += term;
        if (i < n) {
            printf(" + ");
        }
    }

    
    printf("\nSum of the series: %d\n", sum);

    return 0;}
