// Print x to the power n in c use recursion
#include <stdio.h>

int power(int x, int n)
{
    if (n == 0)
        return 1;

    return x * power(x, n - 1);
}

int main()
{
    int x, n;

    printf("Enter x and n: ");
    scanf("%d %d", &x, &n);

    printf("Result = %d", power(x, n));

    return 0;
}