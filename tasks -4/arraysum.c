/* Write a program to find the sum of elements in an array of 5 numbers*/



#include <stdio.h>

int main() {
    int arr[5];
    int sum = 0;

    printf("Enter 5 integers:\n");
    for(int i = 0; i < 5; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];  // Add element to sum
    }

    printf("\nSum of array elements = %d\n", sum);

    return 0;
}

