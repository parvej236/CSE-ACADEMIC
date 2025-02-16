#include <stdio.h>
#include <string.h>

int main(){
    char str1[20], str2[20];
    gets(str1);

    // int i=0;
    // while(str1[i]!='\0'){
    //     str2[i]=str1[i];
    //     i++;
    // }

    // strcpy(str2, str1);

    strncpy(str2, str1, 3);
    
    puts(str2);
}