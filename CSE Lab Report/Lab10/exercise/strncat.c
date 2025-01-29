#include<stdio.h>
#include<string.h>

int main(){
    char str1[100] = "Hello";
    char str2[]="World CUET";

    strncat(str1, str2, 5);

    puts(str1);
}
