#include<stdio.h>

int main(){
    int n, m;
     // Input the number of rows and columns
    printf("Enter the number of rows and columns of the matrix (n x m): ");
    scanf("%d %d", &n, &m);

    // Dynamically allocate memory for the matrix
    int **matrix = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        matrix[i] = (int*)malloc(m * sizeof(int));
    }

    // Free dynamically allocated memory
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    
    free(matrix);

}