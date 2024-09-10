#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n;

   
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
               
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    
    double middleValue;
    if (n % 2 == 1) {
        
        middleValue = arr[n / 2];
    } else {
        
        middleValue = (arr[n / 2] + arr[n / 2 - 1]) / 2.0;
    }

    
    if (n % 2 == 1) {
        printf("The middle value is: %.2lf\n", middleValue);
    } else {
        printf("The middle values are: %.2lf and %.2lf\n", arr[n / 2 - 1], arr[n / 2]);
    }

    return 0;
}

