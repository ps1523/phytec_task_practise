//Write a program to declare a pointer to an integer and print its value and address.



#include <stdio.h>

int main() {
    int num = 50;       
    int *ptr;           

    ptr = &num;         

    printf("Value of num = %d\n", num);
    printf("Value using pointer = %d\n", *ptr);
    printf("Address of num = %p\n", &num);       
    printf("Address stored in pointer = %p\n", ptr);

    return 0;
}

