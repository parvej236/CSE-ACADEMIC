#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int oct = 0;
    int i = 1;
    while(n!=0){
        oct = oct + ((n%8) * i);
        n/=8;
        i*=10;
    }
    printf("%d\n", oct);
}