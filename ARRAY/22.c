// C Program to Find the Normal and Trace 

#include <stdio.h>
#include <math.h>

void findNormalAndTrace(int mat[][3], int n, double *normal, int *trace) {
    *trace = 0;
    double sumOfSquares = 0;

    for (int i = 0; i < n; i++) {
        *trace += mat[i][i];
        for (int j = 0; j < n; j++) {
            sumOfSquares += mat[i][j] * mat[i][j];
        }
    }

    *normal = sqrt(sumOfSquares);
}

int main() {
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    double normal;
    int trace;

    findNormalAndTrace(mat, 3, &normal, &trace);

    printf("Trace of the matrix: %d\n", trace);
    printf("Normal of the matrix: %.2lf\n", normal);

    return 0;
}
