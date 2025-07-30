/*Develop a program to store and display an integer, a float, and a character in separate variables.*/


#include <stdio.h>

int main() {
    int age = 25;         
    float height = 5.9;    
    char grade = 'A';     

    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}

