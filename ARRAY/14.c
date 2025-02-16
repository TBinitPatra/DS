// C Program to Remove All Occurrences of an Element in an Array 

#include <stdio.h>

int removeElement(int arr[], int n, int key) {
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != key) {
            arr[j++] = arr[i];
        }
    }
    return j;
}

int main() {
    int arr[] = {1, 2, 3, 4, 2, 5, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;

    n = removeElement(arr, n, key);

    printf("Array after removing %d: ", key);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
