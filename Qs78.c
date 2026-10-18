
// Inversion Count in C
// Definition: An inversion in an array is a pair of indices 
// (
// i
// ,
// j
// )
// (i,j) such that 
// i
// <
// j
// i<j and arr[i] > arr[j].

// The inversion count tells us how far an array is from being sorted.

// For example, in the array {2, 4, 1, 3, 5}, the inversions are (2,1), (4,1), and (4,3). Therefore, the inversion count is 3.


#include <stdio.h>

long long merge(int arr[], int temp[], int left,
                int mid, int right) {
    int i = left, j = mid + 1, k = left;
    long long count = 0;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            count += mid - i + 1;
        }
    }

    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    for (i = left; i <= right; i++)
        arr[i] = temp[i];

    return count;
}

long long mergeSort(int arr[], int temp[],
                    int left, int right) {
    long long count = 0;

    if (left < right) {
        int mid = left + (right - left) / 2;

        count += mergeSort(arr, temp, left, mid);
        count += mergeSort(arr, temp, mid + 1, right);
        count += merge(arr, temp, left, mid, right);
    }

    return count;
}

int main() {
    int arr[] = {2, 4, 1, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp[n];

    long long inversions =
        mergeSort(arr, temp, 0, n - 1);

    printf("Inversion Count: %lld\n", inversions);

    return 0;
}
