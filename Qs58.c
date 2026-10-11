// Write a function that prints the largest of 3 numbers
#include <stdio.h>

void largest(int a, int b, int c) {
    if (a >= b && a >= c) {
        printf("%d is the largest number\n", a);
    } 
    else if (b >= a && b >= c) {
        printf("%d is the largest number\n", b);
    } 
    else {
        printf("%d is the largest number\n", c);
    }
}

int main() {
    largest(10, 25, 15);
    return 0;
}