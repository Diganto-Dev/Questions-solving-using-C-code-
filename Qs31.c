#include <stdio.h>

int main(){

    int n = 5;
    int fact = 1;
    int i = n;

    while( i > 0 ){ 
        if ( n == 0 || n == 1){
            printf("%d",1);
        }
        fact *= i;
        i--;

       
    }

    printf("%d \n", fact);

    return 0;
}