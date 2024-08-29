#include <stdio.h>

double power(double base, int exponent) {
    double result = 1.0;

    while (exponent != 0) {
       
        if (exponent > 0) {
            result *= base;
            exponent--;
        }
        
        else {
            result /= base;
            exponent++;
        }
    }

    return result;
}

int main() {
    double base, result;
    int exponent;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    result = power(base, exponent);

    printf("%.2lf raised to the power %d is %.2lf\n", base, exponent, result);

    return 0;
}

