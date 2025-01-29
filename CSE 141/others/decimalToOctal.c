#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int bi = 0;
    int i = 1;
    while(n!=0){
        bi = bi + ((n%8) * i);
        n/=8;
        i*=10;
    }
    printf("result: %d\n", bi);
}