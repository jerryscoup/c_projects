
#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr1[MAX_SIZE], arr2[MAX_SIZE], mergedArray[MAX_SIZE * 2];
    int n1, n2, mergedSize;

    
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);

    
    printf("Enter %d elements for the first array:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);

    
    printf("Enter %d elements for the second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    
    mergedSize = n1 + n2;
    int k = 0;
    for (int i = 0; i < n1; i++) {
        mergedArray[k++] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        mergedArray[k++] = arr2[i];
    }

   
    printf("Merged array:\n");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}

