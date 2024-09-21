#include <stdio.h>


int my_abs(int num) {
    if (num < 0) {
        return -num; 
    } else {
        return num;  
    }
}

int main() {
    int number;

   
    printf("Enter a number: ");
    scanf("%d", &number);

  
    printf("Absolute value of %d is: %d\n", number, my_abs(number));

    return 0;
}
