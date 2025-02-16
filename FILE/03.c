
// // rename function in C

#include <stdio.h>

int main()
{
    char old_name[] = "animals.txt";
    char new_name[] = "wildlife.txt";
    int value;

    value = rename(old_name, new_name);

    if (!value) {
        printf("File name changed successfully\n");
    } else {
        perror("Error");
    }

    return 0;
}

