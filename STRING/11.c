// C Program to Determine the Unicode Code Point at a Given Index 

#include <stdio.h>

void printUnicodeAtIndex(char str[], int index) {
    if (index < 0 || str[index] == '\0') {
        printf("Invalid index\n");
        return;
    }

    printf("Unicode code point at index %d: U+%04X\n", index, (unsigned char)str[index]);
}

int main() {
    char str[] = "Hello, 世界!";
    int index = 7;

    printUnicodeAtIndex(str, index);

    return 0;
}
