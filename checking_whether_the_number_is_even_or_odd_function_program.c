#include <stdio.h>


int checkOddEven(int num) {
    if (num % 2 == 0) {
        return 0; 
    } else {
        return 1; 
    }
}

int main() {
    int number;


    printf("Enter a number: ");
    scanf("%d", &number);

    
    if (checkOddEven(number)) {
        printf("%d is odd.\n", number);
    } else {
        printf("%d is even.\n", number);
    }

    return 0;
}

