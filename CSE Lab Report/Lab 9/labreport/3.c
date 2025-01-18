#include<stdio.h>

int arraySum(int ara[], int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=ara[i];
    }
    return sum;
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    int ara[n];
    for(int i=0;i<n;i++){
        scanf("%d", &ara[i]);
    }

    int sum = arraySum(ara, n);
    printf("Sum: %d\n", sum);
}