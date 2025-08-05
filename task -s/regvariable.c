//Use a register variable in a for loop to count from 0 to 4 and print the result.

#include <stdio.h>

int main() {
    register int i; 

    printf("Counting from 0 to 4 using register variable:\n");
    for(i = 0; i < 5; i++) {
        printf("%d\n", i);
    }

    return 0;
}

