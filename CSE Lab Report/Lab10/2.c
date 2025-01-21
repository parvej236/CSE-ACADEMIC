#include <stdio.h>

struct customer {
    char name[100];
    char address[150];
    int id;
    int bookCount;
};

int main() {
    struct customer info[2];

    for (int i = 0; i < 2; i++) {
        gets(info[i].name);
        gets(info[i].address);
        printf("Enter ID: ");
        scanf("%d", &info[i].id);

        printf("Enter book count: ");
        scanf("%d", &info[i].bookCount);

        getchar();
    }

    printf("\nCustomer Details:\n");
    for (int i = 0; i < 2; i++) {
        printf("Name: %s, Address: %s, ID: %d, Book Count: %d\n",
               info[i].name, info[i].address, info[i].id, info[i].bookCount);
    }

    return 0;
}
