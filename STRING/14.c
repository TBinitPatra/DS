// C Program to Compare Two Strings Lexicographically 

#include <stdio.h>
#include <string.h>

void compareStringsLexicographically(char str1[], char str2[]) {
    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("\"%s\" comes before \"%s\" lexicographically.\n", str1, str2);
    } else {
        printf("\"%s\" comes after \"%s\" lexicographically.\n", str1, str2);
    }
}

int main() {
    char str1[] = "apple";
    char str2[] = "banana";

    compareStringsLexicographically(str1, str2);

    return 0;
}
