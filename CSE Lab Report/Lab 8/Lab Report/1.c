#include<stdio.h>

void findMaxMin(int ara[], int n, int *max, int *min){
    *max = ara[0];
    *min = ara[0];
    for(int i=1; i<n;i++){
        if(ara[i]>*max) {
            *max = ara[i];
        }
        if(ara[i]<*min){
            *min = ara[i];
        }
    }
}

int main(){
    int ara[]={12,45,7,22,89,2,34,2};
    int n = sizeof(ara)/sizeof(ara[0]);
    int max, min;
    findMaxMin(ara, n, &max, &min);
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    return 0;
}