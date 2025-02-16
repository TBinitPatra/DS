// C program to Reverse a String Using Recursion

#include <stdio.h>
#include <string.h>

void reverseStringRecursively(char str[], int left, int right) {
    if (left >= right) {
        return;
    }

    char temp = str[left];
    str[left] = str[right];
    str[right] = temp;

    reverseStringRecursively(str, left + 1, right - 1);
}

int main() {
    char str[] = "Hello";
    int length = strlen(str);

    reverseStringRecursively(str, 0, length - 1);

    printf("Reversed String: %s\n", str);

    return 0;
}
