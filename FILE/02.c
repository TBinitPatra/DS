// // Read/Write Structure From/to a File in C

#include <stdio.h>
#include <stdlib.h>

struct person {
    int id;
    char fname[20];
    char lname[20];
};

int main()
{
    FILE* outfile;

    outfile = fopen("person.bin", "wb");
    if (outfile == NULL) {
        fprintf(stderr, "\nError opening file\n");
        exit(1);
    }

    struct person input1 = { 1, "Arjun", "Verma" };

    int flag = fwrite(&input1, sizeof(struct person), 1, outfile);
    if (flag) {
        printf("Contents of the structure written successfully\n");
    } else {
        printf("Error Writing to File!\n");
    }

    fclose(outfile);
    return 0;
}

