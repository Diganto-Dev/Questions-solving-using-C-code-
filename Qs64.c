// To check if an array is sorted using recursion

#include <stdio.h>

int isSorted(int arr[], int n)
{
    if (n == 1)
        return 1;

    if (arr[n - 1] < arr[n - 2])
        return 0;

    return isSorted(arr, n - 1);
}


int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    if (isSorted(arr, n))
        printf("Array is sorted");
    else
        printf("Array is not sorted");

    return 0;
}