// C Program to Read and Print All Files From a Zip File
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <zip.h>  

void print_file_contents(const char *filename, struct zip *archive) {
    struct zip_file *file = zip_fopen(archive, filename, 0);
    if (!file) {
        fprintf(stderr, "Error opening file %s in zip archive\n", filename);
        return;
    }

    char buffer[1024];
    zip_int64_t bytes_read;  // Declare bytes_read before using it

    while ((bytes_read = zip_fread(file, buffer, sizeof(buffer))) > 0) {
        fwrite(buffer, 1, bytes_read, stdout);
    }

    if (bytes_read < 0) {
        fprintf(stderr, "Error reading file %s\n", filename);
    }

    zip_fclose(file);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <zipfile>\n", argv[0]);
        return 1;
    }

    int err = 0;
    struct zip *archive = zip_open(argv[1], 0, &err);
    if (!archive) {
        fprintf(stderr, "Error opening zip archive %s\n", argv[1]);
        return 1;
    }

    int num_files = zip_get_num_entries(archive, 0);
    for (int i = 0; i < num_files; i++) {
        const char *filename = zip_get_name(archive, i, 0);
        if (!filename) {
            fprintf(stderr, "Error reading file name at index %d\n", i);
            continue;
        }
        printf("\nContents of %s:\n", filename);
        print_file_contents(filename, archive);
        printf("\n");
    }

    zip_close(archive);
    return 0;
}
