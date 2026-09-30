#include <stdio.h>

int main(){

    int n = 10829;
    int sum = 0;
    while (n > 0){
        int num = n % 10;
        if(num % 2 != 0){
            sum = sum + num;
        }

        n = n / 10;
    }
    
    printf("%d" , sum);

    return 0;
}