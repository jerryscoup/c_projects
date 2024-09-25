#include <stdio.h>
#include <math.h>


int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}


double sinSeries(double x, int terms) {
    double result = 0.0;
    int sign = 1;

    for (int i = 0; i < terms; i++) {
        result += sign * pow(x, 2 * i + 1) / factorial(2 * i + 1);
        sign *= -1;
    }

    return result;
}

int main() {
    double angle;
    int terms;

   
    printf("Enter the angle in radians: ");
    scanf("%lf", &angle);

   
    printf("Enter the number of terms in the series: ");
    scanf("%d", &terms);

   
    double sineValue = sinSeries(angle, terms);

    
    printf("Sin(%lf) using %d terms in the series is: %lf\n", angle, terms, sineValue);

    return 0;
}



