// // Flexible Array Members in a structure in C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// struct student {
//     int stud_id;
//     int name_len;
//     int struct_size;
//     char stud_name[]; 
// };
// struct student* createStudent(int id, const char* name) {
//     struct student* s = malloc(sizeof(*s) + (strlen(name) + 1) * sizeof(char));
    
//     if (s == NULL) {
//         perror("Failed to allocate memory");
//         exit(EXIT_FAILURE);
//     }

//     s->stud_id = id;
//     s->name_len = strlen(name);
//     strcpy(s->stud_name, name); 

//     s->struct_size = sizeof(*s) + (s->name_len + 1) * sizeof(char);

//     return s;
// }

// void printStudent(const struct student* s) {
//     printf("Student ID: %d\n", s->stud_id);
//     printf("Student Name: %s\n", s->stud_name);
//     printf("Name Length: %d\n", s->name_len);
//     printf("Allocated Struct Size: %d bytes\n\n", s->struct_size);
// }

// int main() {
//     struct student* s1 = createStudent(523, "Cherry");
//     struct student* s2 = createStudent(535, "Sanjayulsha");

//     printStudent(s1);
//     printStudent(s2);

//     printf("Size of struct student (without FAM): %zu bytes\n", sizeof(struct student));
//     printf("Size of struct pointer: %zu bytes\n", sizeof(s1));

//     free(s1);
//     free(s2);

//     return 0;
// }
