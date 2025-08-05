//Declare an extern variable in one file and access it in another (use two files).
//
#include <stdio.h>

int count = 10;  // Definition & initialization of extern variable

void displayCount();  // Function prototype

int main() {
    displayCount();  // Call function from file2.c
    return 0;
}

