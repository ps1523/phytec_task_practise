//Write a function with a static variable to keep track of function calls.

#include <stdio.h>

void callCounter() {
    static int count = 0;
    count++;
    printf("Function called %d time(s)\n", count);
}

int main() {
    callCounter(); 
    callCounter(); 
    callCounter();  

    return 0;
}

