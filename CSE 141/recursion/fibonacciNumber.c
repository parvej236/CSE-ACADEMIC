#include<stdio.h>

int fibonacci(int n) {
    if(n==0){ //base case
        return 0; 
    } else if(n==1) { // base case
        return 1;
    } else { // recursive case
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int n = 7;
    printf("Fibonacci: %d/n", fibonacci(n));
    
    return 0;
}