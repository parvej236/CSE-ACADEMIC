#include<stdio.h>

int factorial(int n){
    int ans;
    
    if(n==0){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if(n>=0){
        printf("Ans: %d\n", factorial(n));
    } else {
        printf("Not possible.\n");
    }

    
}