// C Program to Print Boundary Elements of a Matrix 

#include <stdio.h>

void printBoundaryElements(int mat[][4], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                printf("%d ", mat[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main() {
    int mat[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    printf("Boundary elements of the matrix:\n");
    printBoundaryElements(mat, 4, 4);

    return 0;
}
