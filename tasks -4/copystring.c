// Write a program to copy one string to another using strcpy().
//
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter a string: ");
    scanf("%[^\n]s", str1);

    strcpy(str2, str1);

    printf("Original String (str1): %s\n", str1);
    printf("Copied String   (str2): %s\n", str2);

    return 0;
}

