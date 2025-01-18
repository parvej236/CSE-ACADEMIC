#include<stdio.h>

void even_number(int start, int end){
    for(int i=start;i<=end;i++){
        if(i%2==0){
        printf("%d ", i);
        }
    }
    printf("\n");
}

int main(){
    int start, end;
    scanf("%d %d", &start, &end);
    even_number(start, end);
}