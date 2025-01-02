#include <stdio.h>

int main()
{
    int marks;
    scanf("%d", &marks);
    
    marks = marks / 10;

    switch (marks)
    {
        case 10:
        case 9:
        case 8:
            printf("A+");
            break;
        case 7:
            printf("A");
            break;
        case 6:
            printf("A-");
            break;
        default:
            printf("Fail");
            break;
    }
    
    return 0;
}