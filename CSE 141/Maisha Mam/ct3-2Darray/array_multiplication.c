#include<stdio.h>

int main(){
    int m,n,p,q;
    printf("enter rows and columns of the first matrix: ");
    scanf("%d %d", &m, &n);

    printf("enter rows and columns of the second matrix: ");
    scanf("%d %d", &p, &q);

    if(n!=p){
        printf("matrix multiplication is not possible");
        return 1;
    }

    int mat1[m][n], mat2[p][q], result[m][q];

    printf("Enter elements of the first matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &mat1[i][j]);
        }
    }

     printf("Enter elements of the second matrix:\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d", &mat2[i][j]);
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            result[i][j]=0;
        }
    }

    // multiplication

    printf("Resultant matrix after multiplication:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            for(int k=0;k<n;k++){
                result[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}