//Declare an auto variable inside a block and print its value.


#include <stdio.h>

int main() {
    printf("Inside main function\n");

    {
        auto int num = 25;  // auto variable declaration inside a block
        printf("Value of auto variable 'num' is: %d\n", num);
    }

    return 0;
}

