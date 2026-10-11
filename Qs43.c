// Sum of subarrays --> (Brute Force)
#include <stdio.h>

void SumOfSubarray(int *arr, int n){

    for(int start = 0 ; start < n ; start++){
        for(int end = start ; end < n; end++){
            int sum = 0;
            for(int i = start ; i <= end ; i++){
                // printf("%d" , arr[i]);
                sum = sum + arr[i];
            }
            printf("%d",sum);
            printf(",");
        }

        printf("\n");
    }

}

int main(){

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);

    MaxSumOfSubarray(arr , n);

    return 0;
}