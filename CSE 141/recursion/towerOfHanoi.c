#include<stdio.h>

void towerOfHanoi(int n, char src, char helper, char dest) {
    if(n==1) {
        printf("Transfer disk %d from %c to %c\n", n, src, dest);
        return;
    }

    towerOfHanoi(n-1, src, dest, helper);
    printf("transer disk %d from %c to %c\n", n, src, helper);
    towerOfHanoi(n-1, helper, src, dest);
}

int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    towerOfHanoi(n, 'S', 'H', 'D');
    return 0;
}