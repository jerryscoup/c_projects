#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100


void transposeMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    int transpose[MAX_COLS][MAX_ROWS];

    
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;

    
    printf("Enter the number of rows and columns for the matrix: ");
    scanf("%d %d", &rows, &cols);

    
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

   
    transposeMatrix(matrix, rows, cols);

    return 0;
}