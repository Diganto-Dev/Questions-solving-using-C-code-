#include <stdio.h>

int factorial(int n){
    int sum = 1;
    for(int i = 1; i <= n ; i++){
        sum = sum * i;
    }

   return sum;
}


int main(){
    int result = factorial(10) / factorial(6) * factorial(10-6);
    printf("%d",result);

    return 0;
}