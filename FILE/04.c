
// C fopen() Function

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fptr;

    fptr = fopen("demo_file.txt", "w+");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fptr, "%s", "Animals and Nature");
    fclose(fptr);

    return 0;
}

