#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float x, sum = 0.0;

    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Enter the value of x: ");
    scanf("%f", &x);

    printf("Series: ");
    for (int i = 0; i < n; i++) {
        float term = pow(-1, i) * pow(x, 2 * i + 1); 
        printf("%.2f", term);
        sum += term; 
        if (i < n - 1) {
            printf(" + ");
        }
    }

    
    printf("\nSum of the series: %.2f\n", sum);

    return 0;
}