#include <stdio.h>

int main() {
    char c;
    int asciiValue;
    int choice;

    do {
        
        printf("Enter a character: ");
        scanf(" %c", &c); 

        
        asciiValue = c;

        
        printf("ASCII value of %c is: %d\n", c, asciiValue);

        
        printf("Do you want to continue? (1 for yes, 0 for no): ");
        scanf("%d", &choice);
    } while (choice != 0);

    printf("Program exited.\n");

    return 0;
}


