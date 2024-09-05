#include <stdio.h>


void printWord(int digit) {
    switch(digit) {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        default:
            printf("Invalid digit ");
    }
}

int main() {
    int number, digit;

   
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("In words: ");

    
    int temp = number;
    while (temp != 0) {
        digit = temp % 10;
        printWord(digit);
        temp /= 10;
    }

    printf("\n");

    return 0;
}

