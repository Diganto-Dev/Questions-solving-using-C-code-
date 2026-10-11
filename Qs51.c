// Counting Sort(Code) --> [Sorting Algorithm]
#include <stdio.h>

void countSort(int arr[], int n) {
    int freq[100000] = {0};
    int minVal = arr[0];
    int maxVal = arr[0];


    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }

        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }


    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }


    int j = 0;

    for (int i = minVal; i <= maxVal; i++) {
        while (freq[i] > 0) {
            arr[j++] = i;
            freq[i]--;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    countSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    
    return 0;
}
