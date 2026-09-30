#include <stdio.h>

int main(){

    int num = 5;
    bool isPrime = true;

    // except 1 & number it's self
    for(int i = 2 ; i < num ; i++ ){
        if(num % i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        printf("%d is prime number \n", num);
    }else{
        printf("%d  is not a prime number \n" , num);
    }

    return 0;
}

 