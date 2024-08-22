#include <stdio.h>

int main() {
    int lower_limit, upper_limit;

    printf("Enter the lower limit: ");
    scanf("%d", &lower_limit);
    printf("Enter the upper limit: ");
    scanf("%d", &upper_limit);

    printf("Even numbers between %d and %d are:\n", lower_limit, upper_limit);
    for (int i = lower_limit; i <= upper_limit; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    printf("\nOdd numbers between %d and %d are:\n", lower_limit, upper_limit);
    for (int i = lower_limit; i <= upper_limit; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
