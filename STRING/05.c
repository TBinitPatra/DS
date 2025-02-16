// C Program to Reverse an Array or String

#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int left = 0, right = strlen(str) - 1;
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

void reverseArray(int arr[], int size) {
    int left = 0, right = size - 1;
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    char str[] = "Hello";
    reverseString(str);
    printf("Reversed String: %s\n", str);

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, size);
    printf("Reversed Array: ");
    printArray(arr, size);

    return 0;
}
