#include <stdio.h>
#define MAX_SIZE 10
void matrixMultiplication(int mat1[MAX_SIZE][MAX_SIZE], int mat2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows1, int cols1, int rows2, int cols2) {
    if (cols1 != rows2) {
        printf("Error: The number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return;
    }
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
int main() {
    int mat1[MAX_SIZE][MAX_SIZE];
    int mat2[MAX_SIZE][MAX_SIZE];
    int result[MAX_SIZE][MAX_SIZE];
    int rows1, cols1, rows2, cols2;
    printf("Enter the number of rows and columns for the first matrix (max %d x %d): ", MAX_SIZE, MAX_SIZE);
    scanf("%d %d", &rows1, &cols1);
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter the number of rows and columns for the second matrix (max %d x %d): ", MAX_SIZE, MAX_SIZE);
    scanf("%d %d", &rows2, &cols2);
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    if (cols1 != rows2) {
        printf("Error: The number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1;
    }
    matrixMultiplication(mat1, mat2, result, rows1, cols1, rows2, cols2);
    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
