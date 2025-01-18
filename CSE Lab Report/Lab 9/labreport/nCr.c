#include<stdio.h>

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n * fact(n-1);
}

int nCr(int n, int r){
    int nCr = fact(n) / (fact(r) * fact(n-r));
    return nCr;
}

void main(){
    printf("Enter n and r: ");
    int n, r;
    scanf("%d %d", &n, &r);

    if(n>=r && n>=0 && r>=0){
        printf("%dC%d: %d\n", n, r, nCr(n, r));
    } else {
        printf("Not possible!\n");
    }    
}