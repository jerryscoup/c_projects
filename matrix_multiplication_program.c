#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int main() {
    int matrix1[MAX_ROWS][MAX_COLS], matrix2[MAX_ROWS][MAX_COLS], result[MAX_ROWS][MAX_COLS];
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &rows1, &cols1);

   
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &rows2, &cols2);


    if (cols1 != rows2) {
        printf("Error: The number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1; 
    }

    
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }

   
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

   
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}


