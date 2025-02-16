// C Program to Print the First Letter of Each Word 

#include <stdio.h>
#include <ctype.h>

void printFirstLetters(char str[]) {
    int isWordStart = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isWordStart && isalpha(str[i])) {
            printf("%c ", str[i]);
            isWordStart = 0;
        }

        if (str[i] == ' ') {
            isWordStart = 1;
        }
    }
}

int main() {
    char str[] = "Hello World from C Programming";

    printf("First letters of each word: ");
    printFirstLetters(str);
    printf("\n");

    return 0;
}
