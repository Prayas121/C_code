#include <stdio.h>

// Function to print a matrix
void printMatrix(int matrix[][3], int rows, int cols)
 {
 	int i,j;
    for ( i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[2][3] ;

    printf("Matrix:\n");
    printMatrix(matrix, 2, 3);

    return 0;
}
