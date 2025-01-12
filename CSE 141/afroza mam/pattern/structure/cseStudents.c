#include<stdio.h>
#include<string.h>

struct student{
    int id;
    char dept[10];
    float cgpa;
};

void show_cse(struct student info[6], int sz){
    printf("\nCSE Students are:\n");
       for(int i=0;i<sz;i++){
        if(strcmp(info[i].dept, "CSE")==0){
            printf("%d %s %.2f\n", info[i].id, info[i].dept, info[i].cgpa);
        }
    }
}

int main(){
    struct student info[6];

    printf("Input:\n");

    for(int i=0; i<5;i++){
        scanf("%d %s %f", &info[i].id, info[i].dept, &info[i].cgpa);
    }

    show_cse(info, 5); 

    return 0;
}