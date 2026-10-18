// Binary String Problem using Recursion 
#include <stdio.h>

int binaryString(int n)
{
    if (n == 1)
        return 2;

    if (n == 2)
        return 3;

    return binaryString(n - 1) + binaryString(n - 2);
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Total binary strings = %d", binaryString(n));

    return 0;
}