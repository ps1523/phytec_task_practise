/*Write a program to check if a number (e.g., 10) is positive using if-else.*/

#include <stdio.h>

int main() {
    int number = 10;  // You can change this value to test other numbers

    if (number > 0) {
        printf("The number %d is positive.\n", number);
    } else if (number < 0) {
        printf("The number %d is negative.\n", number);
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}

