#include <stdio.h>

int main(){
    int n = 4;
    char al = 'A';

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1; j <= i; j++){
            printf("%c", al);
        }
        printf("\n");
        al += 1;
    }

    return 0;
}