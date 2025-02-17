#include<stdio.h>

int adder(int ara[], int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+= ara[i];
    }
    return sum;
}

int main(){
    int ara[]={1,2,3,4};
    int sum = adder(ara, 4);
    printf("Sum: %d\n", sum);

    return 0;
}