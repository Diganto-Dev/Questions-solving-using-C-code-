#include <stdio.h>

int main(){

    int n = 4;

    for(int i = n ; i >= 1 ; i--){
        // space
        for(int j = 1 ; j <= n-i ; j++){
            printf(" ");
        }

        for(int j = 1 ; j <= 2*i-1 ; j++){
           if (i == n || i == 1) {
                printf("*");
            } else if (j == 1 || j == 2*i-1) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

    for(int i = 2 ; i <= n ; i++){
        // space
        for(int j = 1 ; j <= n-i ; j++){
            printf(" ");
        }

        for(int j = 1 ; j <= 2*i-1 ; j++){
            if (i == n || i == 1) {
                printf("*");
            } else if (j == 1 || j == 2*i-1) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");

    }


    return 0;
}