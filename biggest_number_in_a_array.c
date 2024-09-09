#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, max, position;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    max = arr[0];
    position = 0;

    
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            position = i;
        }
    }

    
    printf("The position of the biggest number %d is: %d\n", max, position);

    return 0;
}


