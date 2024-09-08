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

    
    printf("The elements in reverse order are:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

