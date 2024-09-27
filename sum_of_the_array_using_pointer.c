#include <stdio.h>
int arraySum(int *arr, int size) {
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
        sum += *(arr + i); 
    }
    return sum;
}

int main() {
    int arr[100], size;

   
    printf("Enter the size of the array: ");
    scanf("%d", &size);

  
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

   
    int sum = arraySum(arr, size);

    
    printf("Sum of array elements is: %d\n", sum);

    return 0;
}

