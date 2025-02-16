#include <stdio.h>

int main(){
    char *str;
    str = "Parvej";

    int l = 0;
    while(*str != '\0') {
        printf("%c located at %d\n", *str, str);
        l++;
        *str++;
    }

    printf("Lenght: %d", l);
}