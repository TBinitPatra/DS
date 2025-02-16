// C Program to Sort a String

#include <stdio.h>
#include <string.h>

void sortString(char str[]) {
    int length = strlen(str);
    
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str[] = "programming";
    
    sortString(str);

    printf("Sorted String: %s\n", str);

    return 0;
}
