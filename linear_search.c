#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, key, found = 0;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the element to search: ");
    scanf("%d", &key);

    
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("%d found at index %d\n", key, i);
            found = 1;
            break;
        }
    }

    
    if (!found) {
        printf("%d not found in the array.\n", key);
    }

    return 0;
}







