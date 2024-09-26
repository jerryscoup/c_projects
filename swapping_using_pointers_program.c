#include <stdio.h>


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

   
    printf("Enter value of first variable: ");
    scanf("%d", &num1);
    printf("Enter value of second variable: ");
    scanf("%d", &num2);

    
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

   
    swap(&num1, &num2);

    
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}