//Declare an extern variable in one file and access it in another (use two files)i


#include <stdio.h>

extern int count;  // Declaration of extern variable (defined in file1.c)

void displayCount() {
    printf("The value of count is: %d\n", count);
}

