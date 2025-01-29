#include<stdio.h>

int main(){
    char str[100];
    gets(str);

    int size = strlen(str);
    int flag = 1;

   for(int i=0;i<size/2;i++){
        if(str[i]!=str[size - i-1]) {
            printf("Not palindrome.\n");
            flag = 0;
            break;
        }
    }

    if(flag){
        printf("palindrome\n");
    }
}
