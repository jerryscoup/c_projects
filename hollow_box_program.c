#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the hollow box: ");
    scanf("%d", &size);


    for (int i = 1; i <= size; i++) {
        printf("* ");
    }
    printf("\n");

    for (int i = 2; i <= size - 1; i++) {
        printf("* ");
        for (int j = 2; j <= size - 1; j++) {
            if (i == size / 2 + 1) { 
                if (j != size / 2 + 1) {
                    printf("  ");
                } else {
                    printf("* ");
                }
            } else {
                printf("  "); 
        }
        printf("*\n"); 
    }

    
    for (int i = 1; i <= size; i++) {
        printf("* ");
    }
    printf("\n");

    return 0;
}
}