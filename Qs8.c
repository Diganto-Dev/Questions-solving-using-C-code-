# include <stdio.h>

int main(){

    int n = 4;
    for(int i = 1 ; i <= n ; i++){

        printf("*");  // First
        for(int j = 1 ; j <= n ; j++){
            if (i == 1 || i == n){
                printf("*");
            }else {
                printf(" ");
            }
        }

        printf("*");  // end
        printf("\n");
    }
    return 0;
}

