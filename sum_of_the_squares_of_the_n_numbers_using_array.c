#include <stdio.h>

int main() {
    int n;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    
    int numbers[n];

    
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int sumOfSquares = 0;
    for (int i = 0; i < n; i++) {
        sumOfSquares += numbers[i] * numbers[i];
    }

    
    printf("The sum of squares of the numbers is: %d\n", sumOfSquares);

    return 0;
}