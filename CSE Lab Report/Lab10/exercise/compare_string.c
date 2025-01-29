#include<stdio.h>

int main(){
    char str1[100], str2[200], str3[100];
    int i = 0, x;
    gets(str1);
    gets(str2);

    strcpy(str3, str1);

    // while(str1[i]==str2[i] && str1[i]!='\0' && str2[i]!='\0'){
     //   i++;
    //}

    //if(str1[i]=='\0' && str2[i]=='\0'){
     //   printf("is euqal\n");
    //} else {
     //   printf("not equal\n");
    //}

    x = strcmp(str1, str2);

    if(x == 0){
        printf("Equal\n");
    } else if (x < 0) {
        printf("str1 is smaller\n");
    } else {
        printf("str2 is smaller\n");
    }



    printf("Copied string : %s\n", str3);




}
