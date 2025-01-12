#include<stdio.h>

int main(){
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    int ara[10]={0};

    while(n>0){
        ara[n%10]++;
        n=n/10;
    }

    for(int i=0;i<10;i++){
        printf("Count %d: %d\n",i, ara[i]);
    }

    return 0;
}
