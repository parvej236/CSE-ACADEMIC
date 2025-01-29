#include <stdio.h>

struct customer {
    char name[100];
    char adress[200];
    int customerID;
    int bookCount;
};

void showInfo(struct customer info[], int n) {
    printf("\nCustomers with more than 5 books:\n");
    for (int i = 0; i < n; i++) {
        if (info[i].bookCount > 5) {
            printf("%s, %s, %d, %d\n", info[i].name, info[i].adress, info[i].customerID, info[i].bookCount);
        }
    }
}

int main() {
    struct customer info[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter details for customer %d:\n", i + 1);
        printf("Name: ");
        gets(info[i].name);
        printf("Address: ");
        gets(info[i].adress);
        printf("Customer ID and Book Count: ");
        scanf("%d %d", &info[i].customerID, &info[i].bookCount);
        while (getchar() != '\n');
    }

    showInfo(info, 3);

    return 0;
}
