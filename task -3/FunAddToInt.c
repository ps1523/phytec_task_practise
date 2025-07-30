/*Write a function add() that takes two integers as parameters and prints their sum.*/


#include <stdio.h>

void add(int a, int b) {
    int sum = a + b;
    printf("Sum = %d\n", sum);
}

int main() {
    int num1 = 5, num2 = 3;
    add(num1, num2);
    return 0;
}

