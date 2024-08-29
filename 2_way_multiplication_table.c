#include <stdio.h>

int main() {
    int i, j;

   
    for (i = 2; i <= 5; i++) {
        printf("%d\t", i);
    }
    printf("\n");

    
    for (i = 2; i <= 5; i++) {
        for (j = 2; j <= 5; j++) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }

    return 0;
}
 