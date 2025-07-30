/*Create a function multiply() that returns the product of two numbers.*/


#include <stdio.h>

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int num1 = 4, num2 = 5;
    int product = multiply(num1, num2);  
    printf("Product = %d\n", product);
    return 0;
}

