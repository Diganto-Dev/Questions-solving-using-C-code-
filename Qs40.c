// Reverse an array
#include <stdio.h>

void printArray(int *arr , int size){
    for(int i = 0; i < size ; i++){
        printf("%d \n",arr[i]);
    }
}


int main(){

    int arr[] = {5,4,3,9,2};
    int size = sizeof(arr) / sizeof(int);
    int copy[size];

    for(int i = 0 ; i < size ; i++){
        int j = size-i-1;
        copy[i] = arr[j];
    }

    for(int j = 0 ; j < size; j++){
       arr[j] = copy[j];
    }

    printArray(copy , size);

    return 0;
}