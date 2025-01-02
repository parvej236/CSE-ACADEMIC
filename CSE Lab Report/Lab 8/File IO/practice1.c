#include<stdio.h>

int main(){
    FILE *fp1, *fp2;
    fp1=fopen("input.txt", "r");
    fp2=fopen("output.txt","w");

    char ch;
    while(1){
        ch=getc(fp1);
        if(ch==EOF) break;
        else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            putc(ch,fp2);
        }
        fclose(fp1);
        fclose(fp2);
    }
}