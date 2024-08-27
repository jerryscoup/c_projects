#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float x, sum = 0.0;

    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Enter the value of x in radians: ");
    scanf("%f", &x);

    printf("Sine series: ");
    for (int i = 0; i < n; i++) {
        int sign = (i % 2 == 0) ? 1 : -1; 
        float term = sign * pow(x, 2 * i + 1) / tgamma(2 * i + 2); 
        sum += term; 
        printf("%.6f", term);
        if (i < n - 1) {
            printf(" + ");
        }
    }

    
    printf("\nSum of the sine series: %.6f\n", sum);

    return 0;
}
