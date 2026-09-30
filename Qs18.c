

#include <stdio.h>

int main(){

    int n = 371;
    int num = n;
    int sum = 0;

    while(num > 0){
        int lasstDigt = num % 10;
        sum += lasstDigt * lasstDigt * lasstDigt;

        num /= 10;
    }

    if (n == sum){
        printf("%d is a Armstrong Numbe" , n);
    }else{
        printf("%d is not a Armstrong Numbe" , n);
    }

    return 0;
}