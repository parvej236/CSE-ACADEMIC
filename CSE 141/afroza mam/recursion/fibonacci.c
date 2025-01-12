#include<stdio.h>

int fibonacci(int n){
    if(n==0){
        return 0;
    } else if (n==1){
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}


int main(){
    printf("Enter a positive number: ");
    int n;
    scanf("%d", &n);

    if(n<0){
        printf("Please enter positive integer.\n");
    } else {
        printf("Fibonacci Sequece: ");
        for(int i=0;i<n;i++){
            printf("%d, ", fibonacci(i));
        }
    }
    printf("\n");

    return 0;
}