#include<stdio.h>

void printMaxMin(int ara[], int n){
    int min = ara[0], max = ara[0];

    for(int i=0;i<n;i++){
        if(ara[i]<min){
            min = ara[i];
        }

        if(ara[i]>max){
            max = ara[i];
        }
    }

    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    int ara[n];
    for(int i=0;i<n;i++){
        scanf("%d", &ara[i]);
    }

    printMaxMin(ara, n);
}