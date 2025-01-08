#include<stdio.h>
#include<math.h>

int main() {
    int n = 12345;
    int rev = 0;
    int sum = 0;

    for(int i = 0; i < 5; i++) {
        rev=n%10;
        n = n/10;
        sum = sum * 10 + rev;
    }
    printf("\n%d\n", sum);
    
}