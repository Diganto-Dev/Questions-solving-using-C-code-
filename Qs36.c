#include <stdio.h>
#include <math.h>

int main(){
    int n = 10010;
    int binary = 0;
    int i = 0;

    while( n != 0){
        int lastDig = n % 10;
        binary = binary + (lastDig * pow(2,i));
        i++;
        n /= 10;
    }

    printf("%d",binary);

    return 0;
}