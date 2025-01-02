#include<stdio.h>
#include<ctype.h>

int main() {
    char ch;
    ch = getchar();
    putchar(ch);
    printf("\n%c\n", ch);
    printf("isalpha %d\n", isalpha(ch));
    printf("isalnum %d\n", isalnum(ch));
    printf("isdigit %d\n", isdigit(ch));
    printf("islower%d\n", islower(ch));
    printf("isupper %d\n", isupper(ch));
    printf("isspace %d\n", isspace(ch));
    printf("isprint %d\n", isprint(ch));
    printf("ispunct %d\n", ispunct(ch));

    return 0;
}
