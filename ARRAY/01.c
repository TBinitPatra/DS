// C Program to Print a 2D Array

#include <stdio.h>

#define ROWS 3
#define COLS 3

void print2DArray(int arr[ROWS][COLS], int rows, int cols) {
    printf("2D Array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    print2DArray(arr, ROWS, COLS);

    return 0;
}
