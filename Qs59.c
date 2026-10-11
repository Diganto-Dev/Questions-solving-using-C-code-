// To check whether a number is a power of 2 in C, you can use the bitwise AND (&) operator.
#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    int n = 16;

    if (isPowerOfTwo(n)) {
        printf("%d is a power of 2\n", n);
    } else {
        printf("%d is not a power of 2\n", n);
    }

    return 0;
}
