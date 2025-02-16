// // C program to store Student records as Structures and Sort them by Age or ID

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

struct Student { 
	char name[50]; 
	int id; 
	int age; 
}; 

int comparator(const void* p, const void* q) { 
	return (((struct Student*)p)->age - ((struct Student*)q)->age); 
} 

int main() { 
	int i = 0, n = 5; 

	struct Student arr[] = { 
		{ "John", 1, 12 }, 
		{ "Alice", 2, 10 }, 
		{ "Bob", 3, 8 }, 
		{ "Charlie", 4, 9 }, 
		{ "David", 5, 10 } 
	}; 

	printf("Unsorted Student Records:\n"); 
	for (i = 0; i < n; i++) { 
		printf("Id = %d, Name = %s, Age = %d \n", 
			arr[i].id, arr[i].name, arr[i].age); 
	} 

	qsort(arr, n, sizeof(struct Student), comparator); 

	printf("\n\nStudent Records sorted by Age:\n"); 
	for (i = 0; i < n; i++) { 
		printf("Id = %d, Name = %s, Age = %d \n", 
			arr[i].id, arr[i].name, arr[i].age); 
	} 

	return 0; 
}
