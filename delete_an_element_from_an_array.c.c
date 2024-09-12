#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, position, element;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the position to insert the element: ");
    scanf("%d", &position);
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    
    if (position < 0 || position > n) {
        printf("Invalid position!\n");
        return 1; 
    }

    
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    
    arr[position] = element;

    
    n++;

    
    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}






#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, position;

   
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

   
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the position to delete the element: ");
    scanf("%d", &position);

   
    if (position < 0 || position >= n) {
        printf("Invalid position!\n");
        return 1; 
    }

   
    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    
    n--;

   
    printf("Array after deletion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
