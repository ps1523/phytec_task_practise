/*Implement a recursive function to calculate the factorial of a number (e.g., 5).*/


#include <stdio.h>

int fact(int n) {
    if (n == 0 || n == 1) 
        return 1;
    else
        return n * fact(n - 1);
}

int main() {
    int num = 5;
    int result = fact(num);  
    printf("Fact of %d = %d\n", num, result);
    return 0;
}

