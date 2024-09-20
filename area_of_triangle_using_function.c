#include <stdio.h>
#include <math.h>


float areaOfTriangle(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    float base, height;

   
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

   
    if (base < 0 || height < 0) {
        printf("Base and height must be non-negative.\n");
    } else {
       
        printf("Area of the triangle is: %.2f\n", areaOfTriangle(base, height));
    }

    return 0;
}