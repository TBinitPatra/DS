// C Program to Insert a String into Another String

#include <stdio.h>
#include <string.h>

void insertString(char mainStr[], char insertStr[], int position) {
    int mainLen = strlen(mainStr);
    int insertLen = strlen(insertStr);

    if (position < 0 || position > mainLen) {
        printf("Invalid position!\n");
        return;
    }

    char result[200];

    strncpy(result, mainStr, position);
    result[position] = '\0';
    strcat(result, insertStr);
    strcat(result, mainStr + position);

    printf("Resulting String: %s\n", result);
}

int main() {
    char mainStr[100] = "Hello World!";
    char insertStr[50] = "Beautiful ";
    int position = 6;

    insertString(mainStr, insertStr, position);

    return 0;
}
