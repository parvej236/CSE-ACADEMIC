#include<stdio.h>

int fibonacci(int n){
    if(n==0 || n==1){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n;
    scanf("%d", &n);
    
    if(n<0){
        printf("Not possible!\n");
    } else {
        printf("Ans: %d\n", fibonacci(n));
    }
}