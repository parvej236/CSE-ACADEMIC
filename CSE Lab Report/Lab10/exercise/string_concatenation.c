#include<stdio.h>
#include<string.h>

int main(){
    char str1[100], str2[200], str3[200];
    int x;
    int i = 0, j=0;
    gets(str1);
    gets(str2);

    /* while(str1[j]!='\0'){
        str3[i] = str1[j];
        i++;
        j++;
    }

    j = 0;
    while(str2[j]!='\0'){
        str3[i] = str2[j];
        i++;
        j++;
    }

    printf("length: %d\n", i);
    str3[i]='\0';

    puts(str3); */


    /* strcat(strcat(str3, str1), str2);
    puts(str3);*/

    x = strncmp(str1, str2, 3);

    if(x == 0) {
        printf("Euqal\n");
    } else if ( x < 0) {
        printf("Str1 substring less then str2\n");
    } else {
        printf("Str2 substring less then str1\n");
    }


    strncpy(str1, str2, 3);
    puts(str1);


}
