// Backtracking on an Array 
#include <stdio.h>

void backtrack(int arr[], int n, int index,
               int subset[], int size) {
    // Base case: processed all elements
    if (index == n) {
        printf("{ ");
        for (int i = 0; i < size; i++) {
            printf("%d ", subset[i]);
        }
        printf("}\n");
        return;
    }

    // Choice 1: Include the current element
    subset[size] = arr[index];
    backtrack(arr, n, index + 1, subset, size + 1);

    // Choice 2: Exclude the current element
    backtrack(arr, n, index + 1, subset, size);
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int subset[n];

    printf("All subsets:\n");
    backtrack(arr, n, 0, subset, 0);

    return 0;
}
