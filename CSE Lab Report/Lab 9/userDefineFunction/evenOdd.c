#include<stdio.h>
void even_odd();

int main(){
    even_odd();
    return 0;
}

void even_odd(){

    printf("Enter a number: ");
    int n;
    scanf("%d", &n);

    (n%2)?printf("Odd\n") : printf("Even\n");
}