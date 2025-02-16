// C Program to Copy All the Elements of One Array to Another Array

#include <stdio.h>

void copyArray(int source[], int destination[], int n) {
    for (int i = 0; i < n; i++) {
        destination[i] = source[i];
    }
}

int main() {
    int source[] = {10, 20, 30, 40, 50};
    int n = sizeof(source) / sizeof(source[0]);
    int destination[n];

    copyArray(source, destination, n);

    printf("Copied array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", destination[i]);
    }
    printf("\n");

    return 0;
}
