#include<stdio.h>

int isPrime(int n);
int isSuperPrime(int n);

int main(){
    int n;
    scanf("%d", &n);
    int x = isSuperPrime(n);
    if(x==0){
        printf("%d is super prime.\n", n);
    } else {
        printf("%d is not super prime.\n", n);
    }
}

int isPrime(int n){
    if(n<2) return 0;

    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int isSuperPrime(int n){
    while(n>=0){
        if(!isPrime(n)){
            return 0;
        }
        n/=10;
    }
return 1;
}