// Tiling problem solve use - Recursion
#include <stdio.h>

int tiling(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return tiling(n - 1) + tiling(n - 2);
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Number of ways = %d", tiling(n));

    return 0;
}