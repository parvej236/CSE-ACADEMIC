#include<stdio.h>

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);

    printf("%d! = %d\n",n, factorial(n));
}