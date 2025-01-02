#include<stdio.h>

void printNums(int n) {
    if(n==0) {
        return;
    }
    printf("%d ", n);
    printNums(n-1);
}

int main() {
    int n = 14;
    printNums(n);
    return 0;
}