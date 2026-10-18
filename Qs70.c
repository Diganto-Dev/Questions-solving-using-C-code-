// Friend Pairing Problem using Recursion 

#include <stdio.h>

int friendPairing(int n)
{
    if (n == 1 || n == 2)
        return n;

    return friendPairing(n - 1) +
           (n - 1) * friendPairing(n - 2);
}

int main()
{
    int n;

    printf("Enter number of friends: ");
    scanf("%d", &n);

    printf("Total ways = %d", friendPairing(n));

    return 0;
}