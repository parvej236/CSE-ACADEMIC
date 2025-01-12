#include<stdio.h>

int fact(int n){
    int res = n;

    if(n==0 || n==1){
        return 1;
    }

    return n * fact(n-1);
}


void main(){

    printf("Enter n and r: ");
    int n, r;
    scanf("%d %d", &n, &r);

    int nCr = fact(n) / (fact(r) * fact(n-r));
    printf("nCr: %d\n", nCr);
}