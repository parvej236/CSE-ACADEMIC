#include <stdio.h>
#include<string.h>

int main() {
    char arr1[20] = {"ABCD"};
    char arr2[20];
    int len = strlen(arr1);

    for (int i=0; i<len; i++)
    {
        arr2[i] = arr1[len-i-1];
    }

    printf("%s\n", arr1);
    printf("%s\n", arr2);
    return 0;
}