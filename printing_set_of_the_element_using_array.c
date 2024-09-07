#include <stdio.h>

int main() {
    int n;

   
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int elements[n];

    
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &elements[i]);
    }

    
    printf("The elements of the set are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", elements[i]);
    }
    printf("\n");

    return 0;
}
