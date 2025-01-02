#include<stdio.h>

int main() {

int ch;
printf("Enter your name please: ");
scanf("%d", &ch);
//ch = getchar();

printf("ASCII of %d = %c", ch, ch);
//putchar(ch);

return 0;
}
