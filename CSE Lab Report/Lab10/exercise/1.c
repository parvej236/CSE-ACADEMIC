#include<stdio.h>
#include<string.h>

int main(){
    char str1[20];
    char str2[20];

    char str3[100];

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // int i = 0;
    // while(str1[i]!='\0'){
    //     str3[i]=str1[i];
    //     i++;
    // }

    // int j = 0;
    // while(str2[j]!='\0'){
    //     str3[i]=str2[j];
    //     i++;
    //     j++;
    // }

    // str3[i]='\0';

    printf("%s\n", str3);

    // int x = strcmp(str1, str2);

    // if(x==0){
    //     printf("Not equal\n");
    // } else if (x < 0){
    //     printf("str1 is smaller");
    // } else {
    //     printf("str1 is greater");
    // }

    // int i = 0;
    // int l = 0;

    // while(str1[i]==str2[i] && str1[i]!='\0' && str2[i]!='\0'){
    //     i++;
    //     l++;
    // }

    // if(str1[l]=='\0' && str2[l]=='\0'){
    //     printf("Equal\n");
    // } else {
    //     printf("Not equal.\n");
    // }
}