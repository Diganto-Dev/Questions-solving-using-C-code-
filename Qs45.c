// MaxSum of subarrays  (Slightly Optimized) way
// Time Complexity is  O(N^2)
#include <stdio.h>

int max(int a , int b){
    if ( a > b){
        return a;
    }

    return b;
}

void SumOfSubarray(int *arr, int n){

    int maxSum = 0;
    for(int start = 0 ; start < n ; start++){
            int currentSum = 0;
        for(int end = start ; end < n; end++){
            currentSum += arr[end];
            maxSum = max(maxSum , currentSum);
        }
    }

    printf(" The max sum of subarrys is : %d \n",maxSum);

}

int main(){

    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr) / sizeof(int);

    SumOfSubarray(arr , n);

    return 0;
}