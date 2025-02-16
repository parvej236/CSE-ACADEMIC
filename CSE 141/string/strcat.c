#include <stdio.h>
#include <string.h>

int main() {
    char str1[20];
    char str2[20];
    char str3[40];

    gets(str1);
    gets(str2);

    // // Copy str1 into str3
    // int i = 0;
    // while (str1[i] != '\0') {
    //     str3[i] = str1[i];
    //     i++;
    // }

    // // Copy str2 into str3 after str1
    // int j = 0;
    // while (str2[j] != '\0') {
    //     str3[i] = str2[j];
    //     i++;
    //     j++;
    // }

    // // Null-terminate the final string
    // str3[i] = '\0';
    
    // strcat(str1, str2);
    // puts(str1);
    
    printf("%s\n", str3);

}