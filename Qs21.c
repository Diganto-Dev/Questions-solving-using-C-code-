#include <stdio.h>

int main(){

    int n = 4;

    for(int i = 1 ; i <= n ; i++){
            
        for(int j = 1; j <= n ;j++){

            if(i==1 || i==n ){
                if( j == 1 || j == n){
                    printf(" ");
                }else{
                    printf("*");
                }
            }


            if(i==2 || i==3){
                if( j == 2 || j == 3){
                    printf(" ");
                }else{
                    printf("*");
                }
            }
        }

        printf("\n");
    }

    return 0;

}


    

    