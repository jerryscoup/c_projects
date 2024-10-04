#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int l = 0, h = size - 1;
    
    while (l<= h) {
        int mid = l + (h - l) / 2;
        
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            l = mid + 1;
        else
            h = mid - 1;
    }
    
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    
    int result = binarySearch(arr, size, target);
    
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");
    
    return 0;
}
