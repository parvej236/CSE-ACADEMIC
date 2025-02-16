#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int fact = 1, i=1;

    start:
    if(i<=n){
        fact*=i;
        i++;
        goto start;
    }

    printf("fact: %d\n", fact);
}