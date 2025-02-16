// C Program to Split a String into a Number of Sub-Strings 

#include <stdio.h>
#include <string.h>

void splitString(char str[], char delimiter) {
    char *token = strtok(str, &delimiter);

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, &delimiter);
    }
}

int main() {
    char str[] = "Hello,World,This,Is,C";
    char delimiter = ',';

    printf("Sub-strings:\n");
    splitString(str, delimiter);

    return 0;
}
