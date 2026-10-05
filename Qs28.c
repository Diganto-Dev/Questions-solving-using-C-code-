#include <stdio.h>

int main() {

    int rows = 5;
    char n = 'A';

    for(int i = 1; i <= rows; i++) {

        for(int j = 1; j <= i; j++) {
            printf("%c", n);
            n += 1;
        }

        printf("\n");
    }

    return 0;
}