#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int frequency[MAX_SIZE];
    int n;

   
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

   
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        frequency[i] = -1; 
    }

    
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
                frequency[j] = 0; 
        }
        if (frequency[i] != 0) {
            frequency[i] = count;
        }
    }

    
    
    printf("Element\t Frequency\n");
    for (int i = 0; i < n; i++) {
        if (frequency[i] != 0) {
            printf("%d\t%d\n", arr[i], frequency[i]);
        }
    }

    return 0;
}

