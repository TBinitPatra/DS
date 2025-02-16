
// C program to copy contents of one file to another file

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr1, *fptr2;
    char sourceFile[100], destFile[100];
    int c;

    printf("Enter the filename to open for reading: ");
    scanf("%s", sourceFile);

    fptr1 = fopen(sourceFile, "r");
    if (fptr1 == NULL)
    {
        printf("Cannot open file %s\n", sourceFile);
        exit(1);
    }

    printf("Enter the filename to open for writing: ");
    scanf("%s", destFile);

    fptr2 = fopen(destFile, "w");
    if (fptr2 == NULL)
    {
        printf("Cannot open file %s\n", destFile);
        fclose(fptr1);
        exit(1);
    }

    while ((c = fgetc(fptr1)) != EOF)
    {
        fputc(c, fptr2);
    }

    printf("Contents copied from %s to %s\n", sourceFile, destFile);

    fclose(fptr1);
    fclose(fptr2);
    return 0;
}

