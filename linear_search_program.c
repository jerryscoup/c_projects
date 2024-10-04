#include <stdio.h>

int main() {
    int arr[100], n, search, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to find: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++) {
        if(arr[i] == search) {
            printf("%d is present at location %d.\n", search, i + 1);
            break;
        }
    }

    if(i == n) {
        printf("%d isn't present in the array.\n", search);
    }

    return 0;
}
