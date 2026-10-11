// Bubble Sort --> [Sorting Algorithm]

#include <stdio.h>


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Print array
void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d , ", arr[i]);
    }
}

int main() {     
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);


    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }

    printArray(arr, n);

    return 0;
}
