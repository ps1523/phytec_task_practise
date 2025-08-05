//. Use pointer arithmetic to access and print elements of an array.
//
//
//
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};  // Declare and initialize array
    int *ptr;  // Declare a pointer to an integer

    ptr = arr;  // Point to the first element of the array (same as &arr[0])

    printf("Accessing array elements using pointer arithmetic:\n");
    for(int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));
    }

    return 0;
}

