#include <stdio.h>

int main(){

    int n , lastDig , rev = 0;
    n = 45678;

    while( n != 0){
        lastDig = n % 10;
        // rev = 8 * 10 + 7 === 80 + 7 = 87 --- iteration --> 2
        rev = rev * 10 + lastDig;
        n/=10;
    }

    printf("The reverse number is : %d \n" , rev);

    return 0;
}