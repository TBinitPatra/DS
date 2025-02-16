// Check if a string is palindrome in C using pointers
#include <stdio.h>

void isPalindrome(char* string) {
    char *ptr = string, *rev = string;
    
    while (*ptr != '\0') {
        ++ptr;
    }
    --ptr;
    
    while (ptr >= rev) {
        if (*ptr != *rev) {
            printf("String is not a Palindrome");
            return;
        }
        --ptr;
        rev++;
    }
    printf("String is Palindrome");
}

int main() {
    char str[1000] = "madam";
    isPalindrome(str);
    return 0;
}

