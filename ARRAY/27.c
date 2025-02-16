// C Program to Compute the Sum of Diagonals of a Matrix

#include <stdio.h>

int sumOfDiagonals(int mat[][3], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += mat[i][i];
        if (i != n - i - 1)
        {
            sum += mat[i][n - i - 1];
        }
    }

    return sum;
}

int main()
{
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int sum = sumOfDiagonals(mat, 3);

    printf("Sum of diagonals: %d\n", sum);

    return 0;
}
