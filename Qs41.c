// Binary Search
// Array should me ordered array

#include <stdio.h>

int main(){
    int arr[] = {2,4,6,8,10,12,14,16};
    int n = sizeof(arr) / sizeof(int);

    int start , end , target;
    start = 0 , end = n-1 , target = 12;


    while( start <= end){
        int mid = (start + end) / 2;

        if(arr[mid] == target){
            printf("%d \n",mid);
            break;
        }else if (arr[mid] < target){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }


    
    return 0;
}