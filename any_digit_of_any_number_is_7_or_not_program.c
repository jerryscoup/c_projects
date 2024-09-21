#include <stdio.h>


int hasDigitSeven(int num) {
    
    while (num != 0) {
        int digit = num % 10;
        if (digit == 7) {
            return 1; 
        num /= 10;
    }
    return 0; 
}

int main() {
    int number;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    if (hasDigitSeven(number)) {
        printf("The number contains digit 7.\n");
    } else {
        printf("The number does not contain digit 7.\n");
    }

    return 0;
}
