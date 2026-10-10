// Linear Search 
#include <stdio.h>

void linearSearch(int *arr , int size , int target){
    for(int i = 0 ; i < size ; i++){
        if(arr[i] == target){
            printf("%d \n",arr[i]);
        }
    }

}

int main(){

    int arr[] = {2,4,6,8,10,12,14,16};
    int size = sizeof(arr) / sizeof(int);

    linearSearch(arr , size , 10);

    return 0;
}