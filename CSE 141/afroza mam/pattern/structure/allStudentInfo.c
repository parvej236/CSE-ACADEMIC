#include<stdio.h>

struct student{
    int id;
    char dept[10];
    float cgpa;
};

int main(){
    struct student info[100];

    printf("Input:\n");

    for(int i=0; i<3;i++){
        scanf("%d %s %f", &info[i].id, info[i].dept, &info[i].cgpa);
    }

    printf("\nOutput:\n");
    for(int i=0;i<3;i++){
        printf("%d %s %.2f\n", info[i].id, info[i].dept, info[i].cgpa);
    }

    return 0;
}