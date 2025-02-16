
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

struct Student { 
	char name[50]; 
	int id; 
	int age; 
}; 

int comparator(const void* p, const void* q) 
{ 
	return strcmp(((struct Student*)p)->name, 
				((struct Student*)q)->name); 
} 

int main() 
{ 
	int i, n = 5; 

	struct Student arr[] = {
		{ "David", 1, 12 },
		{ "Alice", 2, 10 },
		{ "Charlie", 3, 8 },
		{ "Bob", 4, 9 },
		{ "Eve", 5, 10 }
	};

	printf("Unsorted Student Records:\n"); 
	for (i = 0; i < n; i++) { 
		printf("Id = %d, Name = %s, Age = %d \n", 
			arr[i].id, arr[i].name, arr[i].age); 
	} 

	qsort(arr, n, sizeof(struct Student), comparator); 

	printf("\n\nStudent Records sorted by Name:\n"); 
	for (i = 0; i < n; i++) { 
		printf("Id = %d, Name = %s, Age = %d \n", 
			arr[i].id, arr[i].name, arr[i].age); 
	} 

	return 0; 
}
