// Diagonal Sum of a Matrix
#include <stdio.h>

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int sum = 0;

    for (int i = 0; i < 3; i++) {
        sum += arr[i][i];
    }

    printf("Diagonal Sum = %d\n", sum);

    return 0;
}
