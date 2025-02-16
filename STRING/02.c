// C Program to Add 2 Binary Strings.

#include <stdio.h>
#include <string.h>

void addBinaryStrings(char a[], char b[], char result[]) {
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int carry = 0, k = 0;
    char temp[100];

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';

        temp[k++] = (sum % 2) + '0';
        carry = sum / 2;
    }

    temp[k] = '\0';

    for (int x = 0; x < k; x++) {
        result[x] = temp[k - x - 1];
    }
    result[k] = '\0';
}

int main() {
    char binary1[100] = "1101";
    char binary2[100] = "1011";
    char result[100];

    addBinaryStrings(binary1, binary2, result);

    printf("Sum of binary strings: %s\n", result);

    return 0;
}
