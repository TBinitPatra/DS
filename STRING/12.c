// C Program to Remove Leading Zeros 

#include <stdio.h>
#include <string.h>

void removeLeadingZeros(char str[]) {
    int i = 0;
    
    while (str[i] == '0') {
        i++;
    }

    if (str[i] == '\0') {
        printf("0\n");
        return;
    }

    printf("%s\n", &str[i]);
}

int main() {
    char str[] = "00012345";

    printf("Original String: %s\n", str);
    printf("String after removing leading zeros: ");
    removeLeadingZeros(str);

    return 0;
}
