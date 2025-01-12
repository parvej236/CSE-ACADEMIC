#include<stdio.h>

int fact(int n){

    int res = n;

    if(n==0 || n==1){
        return 1;
    }

    if(n==2){
        return res;
    } else {
        res = res * fact(n-1);
    }
}

int nCr(int n, int r){
    int nCr = fact(n) / (fact(r) * fact(n-r));
    return nCr;
}


void main(){

    printf("Enter n and r: ");
    int n, r;
    scanf("%d %d", &n, &r);

    printf("%dC%d: %d\n", n, r, nCr(n, r));
}