#include <stdio.h>

void main() {
    int terms, i;
    float sum = 0.0;

    
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    printf("Series: ");
    for (i = 1; i <= terms; i++) {
        printf("1/%d", i);
        if (i < terms) {
            printf(" + ");
        }
        sum += 1.0 / i;
    }
    printf("\n");

    printf("Sum of the series: %f\n", sum);

    
}
