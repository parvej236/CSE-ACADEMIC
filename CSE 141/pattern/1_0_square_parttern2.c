#include <stdio.h>

int main() {
    for(int i = 0; i<5;i++) {
        for(int j=0;j<5;j++){
            printf(" %d", (i+j+1)%2);
        }
        printf("\n");
    }

    return 0;
}