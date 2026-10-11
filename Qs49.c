// Selection Sort --> [Sorting Algorithm]
#include <stdio.h>


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void selectionSort(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }

        swap(&arr[i], &arr[minIdx]);
    }

    printArray(arr, n);
}

int main() {
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    return 0;
}
