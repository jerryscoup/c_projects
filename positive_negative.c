#include <stdio.h>

int main() {
    int positiveCount = 0, negativeCount = 0;
    int number;

    do {
        
        printf("Enter a number (0 to exit): ");
        scanf("%d", &number);

        if (number > 0)
            positiveCount++;
        else if (number < 0)
            negativeCount++;

    } while (number != 0);

    
    printf("Number of positive numbers: %d\n", positiveCount);
    printf("Number of negative numbers: %d\n", negativeCount);

    return 0;
}

