//Create a program to input a string and print it.

#include <stdio.h>

int main() {
    char str[100];  

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    printf("You entered: %s\n", str);

    return 0;
}

