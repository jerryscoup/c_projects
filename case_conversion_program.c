#include <stdio.h>

int main() {
    char c;
    int choice;

    do {
        
        printf("Enter a letter: ");
        scanf(" %c", &c); 

        
        printf("Choose conversion:\n");
        printf("1. Convert to Uppercase\n");
        printf("2. Convert to Lowercase\n");
        printf("Enter your choice (1 or 2): ");
        scanf("%d", &choice);

        
        switch(choice) {
            case 1:
                if (c >= 'a' && c <= 'z')
                    c = c - 32; 
                printf("Uppercase: %c\n", c);
                break;
            case 2:
                if (c >= 'A' && c <= 'Z')
                    c = c + 32; 
                printf("Lowercase: %c\n", c);
                break;
            default:
                printf("Invalid choice! Please enter 1 or 2.\n");
        }

       
        printf("Do you want to continue? (1 for yes, 0 for no): ");
        scanf("%d", &choice);
    } while (choice != 0);

    printf("Program exited.\n");

    return 0;
}
