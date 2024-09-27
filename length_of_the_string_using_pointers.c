#include <stdio.h>
int stringLength(char *str) {
    int length = 0;
  
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    char str[100];

   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

   
    int length = stringLength(str);

    printf("Length of the string is: %d\n", length);

    return 0;
}

