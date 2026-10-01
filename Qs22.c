#include <stdio.h>

int main() {

    int n = 7;

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n; j++) {

            if ((i == 1 && (j == 2 || j == 3 || j == 5 || j == 6)) ||
                (i == 2 && (j == 1 || j == 4 || j == 7)) ||
                (i == 3) ||
                (i == 4 && j >= 2 && j <= 6) ||
                (i == 5 && j >= 3 && j <= 5) ||
                (i == 6 && j == 4)) {
                
                printf("* ");

            } else {
                
                printf("  ");
            }
        }

        printf("\n");
    }

    return 0;
}