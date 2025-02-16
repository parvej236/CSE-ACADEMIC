#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int reveresed = 0;

    while(n>0){
        int r = n%10;
        reveresed = reveresed * 10 + r;
        n/=10;
    }

    printf("reverese: %d\n", reveresed);
}