#include <stdio.h>

int main() {
    for(int i = 0; i<10;i++) {
        for(int j=1;j<=10;j++){
            printf(" %d", (i+j)%2);
        }
        printf("\n");
    }

    return 0;
}