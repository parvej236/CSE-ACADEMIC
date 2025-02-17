
#include<stdio.h>
#include<string.h>

int main(){
    char str1[] = "Hello, welcome hi w to CUET!";
    char str2[]="w";

    char *result = strstr(str1, str2);

    if(result != NULL) {
        printf("Starting at : %s\n", result);
        printf("found at : %d\n", result-str1);
    } else {
        printf("not found!\n");
    }
}
