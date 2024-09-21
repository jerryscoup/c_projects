#include <stdio.h>


int min(int a, int b, int c) {
    if (a <= b && a <= c) {
        return a;
    } else if (b <= a && b <= c) {
        return b;
    } else {
        return c;
    }
}


int max(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int num1, num2, num3;

   
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    
    printf("Smallest number is: %d\n", min(num1, num2, num3));
    printf("Largest number is: %d\n", max(num1, num2, num3));

    return 0;
}


