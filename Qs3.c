#include <stdio.h>

int main(){

    int c ;
    float f;

    printf("Enter temperature in Celsius: ");
    scanf("%d",&c);

    // F=(°C×59​)+32 formula 
    f = (c * 9/5) + 32;

    printf("Temperature in Fahrenheit: %f °F\n", f);

    return 0;
}