#include<stdio.h>
#define N 5
int main() {
    int n;
    printf("enter the number of elements: ");
    scanf("%d", &n);

    int ara[n];

    for(int i=0;i<n;i++){
        scanf("%d", &ara[i]);
    }

    int largest = ara[0];

    for(int i=0; i<n;i++){
        if(ara[i]>largest){
            largest = ara[i];
        }
    }
    printf("Largest: %d\n", largest);

    int sLargest = ara[0];

    for(int i=0; i<n; i++){
        if(ara[i]>sLargest && ara[i]!=largest){
            sLargest = ara[i];
        }
    }

    printf("Second Largest: %d\n", sLargest);

    return 0;
}