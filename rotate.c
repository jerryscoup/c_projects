#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

void transpose(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    int temp[MAX_ROWS][MAX_COLS];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            temp[j][i] = matrix[i][j];
        }
    }
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            matrix[i][j] = temp[i][j];
        }
    }
}

void reverseRows(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols / 2; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][cols - j - 1];
            matrix[i][cols - j - 1] = temp;
        }
    }
}

void rotate270(int matrix[MAX_ROWS][MAX_COLS], int *rows, int *cols) {
    
    transpose(matrix, *rows, *cols);

   
    reverseRows(matrix, *cols, *rows);

    int temp = *rows;
    *rows = *cols;
    *cols = temp;
}

void displayMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
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

   
    rotate270(matrix, &rows, &cols);

   
    printf("Matrix after rotating by 270 degrees:\n");
    displayMatrix(matrix, rows, cols);

    return 0;
}

