// C Program to Rotate Matrix Elements 

#include <stdio.h>

void rotateMatrix(int mat[][4], int rows, int cols) {
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
    int prev, curr;

    while (top < bottom && left < right) {
        prev = mat[top + 1][left];

        for (int i = left; i <= right; i++) {
            curr = mat[top][i];
            mat[top][i] = prev;
            prev = curr;
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            curr = mat[i][right];
            mat[i][right] = prev;
            prev = curr;
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                curr = mat[bottom][i];
                mat[bottom][i] = prev;
                prev = curr;
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                curr = mat[i][left];
                mat[i][left] = prev;
                prev = curr;
            }
            left++;
        }
    }
}

void printMatrix(int mat[][4], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
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

    printf("Original Matrix:\n");
    printMatrix(mat, 4, 4);

    rotateMatrix(mat, 4, 4);

    printf("Matrix after rotating elements:\n");
    printMatrix(mat, 4, 4);

    return 0;
}
