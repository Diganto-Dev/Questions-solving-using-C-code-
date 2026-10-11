// Buys & Sell Stocks --> return maximum Profit
// Leetcode -- Qs no 121

#include <stdio.h>
#include <limits.h>

int min(int a , int b){
    if(a < b){
        return a;
    }

    return b;
}



int max(int a , int b){
    if(a > b){
        return a;
    }

    return b;
}



void maxProfit(int *prices , int n){
    int bestBuy[10000];
    bestBuy[0] = INT_MAX;

    for(int i=1 ; i<n ; i++){
        bestBuy[i] = min(bestBuy[i-1],prices[i-1]);
        // printf("%d, \n",bestBuy[i]);
    }

    int maxProfit = 0;
    for(int i = 0 ; i < n ; i++){
        int currentProfit = prices[i] - bestBuy[i];
        maxProfit = max(currentProfit , maxProfit);
    }

    printf("max profite : %d \n",maxProfit);
}

int main(){

    int prices[] = {7,1,5,3,6,4};
    int n = sizeof(prices) / sizeof(int);

    maxProfit(prices,n);

    return 0;
}