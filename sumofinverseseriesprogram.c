#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Series: ");
    for (int i = 1; i <= n; i++) {
        float term = (float)i / (2 * i + 1); 
        printf("%.2f", term);
        sum += term; 
        if (i < n) {
            printf(" + ");
        }
    }

   
    printf("\nSum of the series: %.2f\n", sum);

    return 0;
}