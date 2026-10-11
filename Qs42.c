#include <stdio.h>

int main(){

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);

    for(int i = 0 ; i < n ; i++){
        // for(int j = i ; j <= n; j++){
        //     printf("(%d , %d)", arr[i] , arr[j]);
        // }
        printf("%d",i);
    }

    return 0;
}