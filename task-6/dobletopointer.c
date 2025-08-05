// Implement a program using a double pointer to modify a variable.
//
//
//
#include <stdio.h>

void modifyValue(int **ptr) {
    **ptr = 100; 
}

int main() {
    int num = 50;
    int *p;
    int **pp;

    p = &num; 
    pp = &p;   

    printf("Before modification: num = %d\n", num);

    modifyValue(pp);

    printf("After modification: num = %d\n", num);

    return 0;
}

