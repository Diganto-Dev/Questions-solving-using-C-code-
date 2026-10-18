// First occurrence of an element in an array using recursion

#include <stdio.h>

int firstOccurrence(int arr[], int n, int key, int i)
{
    if (i == n)
        return -1;

    if (arr[i] == key)
        return i;

    return firstOccurrence(arr, n, key, i + 1);
}

int main()
{
    int arr[] = {10, 20, 30, 20, 40};
    int n = 5;
    int key = 20;

    int result = firstOccurrence(arr, n, key, 0);

    if (result == -1)
        printf("Element not found");
    else
        printf("First occurrence at index %d", result);

    return 0;
}