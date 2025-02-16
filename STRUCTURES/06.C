// // Read/Write Structure From/to a File in C

#include <stdio.h>
#include <stdlib.h>

struct Person {
    int id;
    char fname[20];
    char lname[20];
};

int main() {
    FILE* outfile;

    outfile = fopen("person.bin", "wb");
    if (outfile == NULL) {
        fprintf(stderr, "Error opening file\n");
        exit(1);
    }

    struct Person person1 = {1, "John", "Doe"};

    if (fwrite(&person1, sizeof(struct Person), 1, outfile)) {
        printf("Structure written successfully\n");
    } else {
        printf("Error writing to file\n");
    }

    fclose(outfile);

    return 0;
}

