#include <stdio.h>

int main() {
    int num, binary = 0, base = 1, rem;
    scanf("%d", &num);
    while (num > 0) {
        rem = num % 2;
        binary = binary + rem * base;
        num = num / 2;