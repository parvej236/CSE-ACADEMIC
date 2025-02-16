#include<stdio.h>

int main(int argc, char *argv[]){
    int i;
    printf("argc = %d\n", argc);
    
    for(int i=0;i<argc;i++){
        printf("%d = %s\n",i,argv[i]);
    }
    printf("\n");

    for(int i=0;i<argc;i++){
        if(argv[i][0]>='A'&& argv[i][0]<='Z'){
            argv[i][0]+='a'-'A';
            printf("%d = %s\n",i,argv[i]);
        }
    }
}