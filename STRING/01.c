// C Program to Add or Concatenate Two Strings

#include <stdio.h>
#include <string.h>

void concatenateStrings(char str1[], char str2[]) {
    strcat(str1, str2);
}

int main() {
    char str1[100] = "Hello, ";
    char str2[50] = "World!";

    concatenateStrings(str1, str2);

    printf("Concatenated String: %s\n", str1);

    return 0;
}
