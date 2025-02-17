#include <stdio.h>

int main() {
    int num;
    char str[100];

    printf("Enter a number: ");
    scanf("%d", &num);  // Reads an integer but leaves '\n' in the buffer

    printf("Enter a string: ");
    gets(str);  // This directly reads '\n' left by scanf

    printf("Number: %d\n", num);
    printf("String: %s\n", str);  // Might print empty or unexpected data

    return 0;
}
