#include <stdio.h>
#include <string.h>

int is_achromatic(char str[]) {
    int len = strlen(str);
    
    for (int i = 0; i < len - 1; i++) {
        if (str[i] == str[i + 1]) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    if (is_achromatic(str)) {
        printf("The string is achromatic.\n");
    } else {
        printf("The string is not achromatic.\n");
    }
    
    return 0;
}
