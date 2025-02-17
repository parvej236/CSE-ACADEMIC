#include <stdio.h>

int main() {
    // print infinite 1
    // for(int i=1; i<5;i=i+(2/3)) {
    //     printf("%d\n", i);
    // }

    
    // for(int i=1;i<10;i++){
    //     if(i==5 || i==8) continue;
    //     if(i==5 || i==8) break;
    //     if(i==6) continue;
        
    //     printf("%d ", i); // 1 2 3 4 7 9
    // }

    // int i,j;
    // for(i=1,j=1;i<=50;i++){
    //     printf("%d\n", i); // 1, 3, 10, 41
    //     i=i+i*j;
    //     j++;
    // }

    for(int i=1;i<=5;i++){
        for(int j=1; j<=i;j++){
            printf("%d ", (i+j)%2);
        }
        printf("\n");
    }
}