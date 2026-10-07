#include <stdio.h>

int main(){

    int n , lastDig , rev = 0;
    
    printf("Enter a number : ");
    scanf("%d",&n);

    int original = n;

    while( n != 0){
        lastDig = n % 10;
        rev = rev * 10 + lastDig;
        n /= 10;
    }

    if(original == rev){
        printf("This number is palindrome");
    }else{
        printf("This number is  not a palindrome");
    }



    return 0;
}