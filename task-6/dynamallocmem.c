//Write a program to dynamically allocate memory for an integer using malloc() and free it.
//
//
//
#include <stdio.h>
#include <stdlib.h> 

int main() {
    int *ptr; 

    ptr = (int *)malloc(sizeof(int));

    if(ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    *ptr = 25;

    printf("Value stored at dynamically allocated memory: %d\n", *ptr);
    printf("Address of allocated memory: %p\n", ptr);

    free(ptr);
    printf("Memory freed successfully.\n");

    return 0;
}

