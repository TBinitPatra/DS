// C Program to Compare Two Strings

#include <stdio.h>
#include <string.h>

int compareStrings(char str1[], char str2[]) {
    return strcmp(str1, str2);
}

int main() {
    char str1[] = "Hello";
    char str2[] = "World";

    int result = compareStrings(str1, str2);

    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("String 1 is smaller than String 2.\n");
    } else {
        printf("String 1 is greater than String 2.\n");
    }

    return 0;
}
