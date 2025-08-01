//Use strlen() to print the length of a string (e.g., "Hello").


#include <stdio.h>
#include <string.h>  

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    int length = strlen(str);

    printf("The length of the string is: %d\n", length);

    return 0;
}

