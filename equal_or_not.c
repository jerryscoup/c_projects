//written on 13 aug by jerryscoup
//purpose of the program  is to write a basic code in c language if 2 inputted numbers are equal or not
#include <stdio.h>

int main() {
    int num1, num2;//2 variable number1 and number2

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num1 == num2) {
        printf("The numbers are equal.\n");
    } else {
        printf("The numbers are not equal.\n");
    }

    return 0;
}





