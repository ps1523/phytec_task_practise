/*Develop a program using do-while to print numbers until a user-entered limit is reached.*/

#include <stdio.h>

int main() {
    int limit;
    int i = 1;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    do {
        printf("%d\n", i);
        i++;
    } while (i <= limit);

    return 0;
}

