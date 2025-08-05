//Create a program mixing auto and static variables to compare their behavior
//
//
#include <stdio.h>

void compareVariables() {
    auto int autoVar = 0;    // Auto variable (re-initialized on every function call)
    static int staticVar = 0;  // Static variable (initialized only once)

    autoVar++;
    staticVar++;

    printf("autoVar = %d, staticVar = %d\n", autoVar, staticVar);
}

int main() {
    printf("First Call:\n");
    compareVariables();

    printf("Second Call:\n");
    compareVariables();

    printf("Third Call:\n");
    compareVariables();

    return 0;
}

