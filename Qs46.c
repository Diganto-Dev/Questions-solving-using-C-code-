// MaxSum of subarrays  (Kadane's Algorithm (DP)) 
// Time Complexity is  O(n)
#include <stdio.h>
#include <limits.h>

int max(int a , int b){
    if ( a > b){
        return a;
    }

    return b;
}


void SumOfSubarray(int *arr, int n){

    int maxSum = INT_MAX;
    int currentSum = 0;
    
    for(int i = 0 ; i < n ; i++){
        currentSum += arr[i];
        maxSum = max(currentSum , maxSum);

        if(currentSum < 0){
            currentSum = 0;
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