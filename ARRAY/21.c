// C Program to Find the Determinant of a Matrix

#include <stdio.h>

int determinantOfMatrix(int mat[3][3])
{
    int determinant = mat[0][0] * (mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1]) - mat[0][1] * (mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0]) + mat[0][2] * (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0]);
    return determinant;
}

int main()
{
    int mat[3][3] = {
        {6, 1, 1},
        {4, -2, 5},
        {2, 8, 7}};

    int determinant = determinantOfMatrix(mat);

    printf("Determinant of the matrix: %d\n", determinant);

    return 0;
}
