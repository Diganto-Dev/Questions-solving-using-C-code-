#include <stdio.h>

int main(){
    int n = 5;
    
    // rows
    for(int i = 1 ; i <= n ; i++){

        // coloums
        for(int j = 1 ; j <= i ; j++){
            printf("%d",i);
        }

        printf("\n");
        
    }

    // 2nd part
    for(int i = n-1 ; i >= 1 ; i--){

        // coloums
        for(int j = 1 ; j <= i ; j++){
            printf("%d",i);
        }

        printf("\n");
        
    }

    return 0;
}