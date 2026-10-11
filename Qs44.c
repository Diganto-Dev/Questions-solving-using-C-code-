// MaxSum of subarrays 
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
        for(int end = start ; end < n; end++){
            int sum = 0;
            for(int i = start ; i <= end ; i++){
                sum = sum + arr[i];
            }
            // printf("%d",sum);
            maxSum = max(maxSum , sum);
            // printf(",");
        }

        printf("\n");
    }

    printf(" The max sum of subarrys is : %d \n",maxSum);

}

int main(){

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);

    SumOfSubarray(arr , n);

    return 0;
}