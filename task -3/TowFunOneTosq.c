/*Develop a program with two functions: one to square a number and another to display it.*/


#include <stdio.h>

int square(int n) {
    return n * n;
}

void display(int result) {
    printf(" square is: %d\n", result);
}

int main() {
    int num = 6;
    int sq = square(num); 
    display(sq);              
    return 0;
}

