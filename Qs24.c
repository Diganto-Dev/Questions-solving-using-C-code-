#include <stdio.h>

int main(){

    int n = 4;

    for(int i = n ; i >= 1 ; i--){
        // space
        for(int j = 1 ; j <= n-i ; j++){
            printf(" ");
        }

        for(int j = 1 ; j <= i ; j++){
            printf("* ");
        }

        printf("\n");
    }

    for(int i = 1 ; i <= n ; i++){
        // space
        for(int j = 1 ; j <= n-i ; j++){
            printf(" ");
        }

        for(int j = 1 ; j <= i ; j++){
            printf("* ");
        }

        printf("\n");
    }


    return 0;
}