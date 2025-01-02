#include<stdio.h>
#include<math.h>
//prime number

int main() {
    int n, sum = 1;
    scanf("%d", &n);

    for(int i; i<=n; i++){
        sum += pow(i,2);
    }
    printf("Sum: %d", sum);
}