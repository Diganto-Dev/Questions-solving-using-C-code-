#include <stdio.h>


int main(){

    int n,count = 0;
    n = 5684;

    while(n != 0){
        int lastDig = n % 10;
        count = count + 1;
        n /= 10;
    }

    printf("total number : %d \n", count);

    return 0;
}