// Find Largest in array
#include <stdio.h>

int main(){

    int arr[] = {5,4,3,9,2};
    int n = sizeof(arr) / sizeof(int);
    int largest = 0;


    for (int i = 1 ; i <= n ; i++){
        if(arr[i] > largest ){
            largest = arr[i];
        }
    }

    printf("The largest  digit : %d \n", largest);

    return 0;
}