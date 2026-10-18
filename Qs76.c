// Merge Sort to Sort an Array of Strings in C
#include <stdio.h>
#include <string.h>

void merge(char arr[][20], int low, int mid, int high) {
    char temp[10][20];
    int i = low, j = mid + 1, k = 0;

    while (i <= mid && j <= high) {
        if (strcmp(arr[i], arr[j]) <= 0)
            strcpy(temp[k++], arr[i++]);
        else
            strcpy(temp[k++], arr[j++]);
    }

    while (i <= mid)
        strcpy(temp[k++], arr[i++]);

    while (j <= high)
        strcpy(temp[k++], arr[j++]);

    for (i = low, k = 0; i <= high; i++, k++)
        strcpy(arr[i], temp[k]);
}

void mergeSort(char arr[][20], int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main() {
    char arr[][20] = {
        "Mango", "Apple", "Orange", "Banana", "Grapes"
    };

    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    printf("Sorted strings:\n");
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);

    return 0;
}
