#include<stdio.h>

int main(){
    int A[3][4]={{3,4,5,6},
    {4,5,6,7},
    {5,6,7,8}};

    int B[3][4]={{1,0,1,1},
    {2,3,6,2},
    {1,2,0,1}};

    int C[3][4];

    // int r, c;
    // int a[r][c];

    // scanf("%d %d", &r, &c);

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
           C[i][j]=A[i][j]+B[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}