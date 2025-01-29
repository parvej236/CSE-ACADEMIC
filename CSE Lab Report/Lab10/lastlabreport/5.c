#include<stdio.h>
#include<string.h>

int main(){
    char str1[100];
    char str2[100];

    gets(str1);
    gets(str2);

    int i = 0, j = 0;
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    while (i < len1 && j < len2) {
        if (str1[i] == str2[j]) {
            j++;
        }
        i++;
    }

    if (j == len2) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

}
