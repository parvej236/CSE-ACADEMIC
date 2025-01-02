#include<stdio.h>
#include<ctype.h>

int main()
{
    /*char c[3] = "C String";
    char name[20];
    printf("What is your name: ");
    //scanf("%s", name);
    fgets(name, sizeof(name), stdin);
    printf("Your name is: ");
    puts(name);
    printf("Length: %d", strlen(name));*/

    /*char name[] = "Harry Potter";
    printf("%c", *name);
    printf("%c", *(name+4));

    char *namePtr;
    namePtr = name;
    printf("\n namePtr: %c", *namePtr);*/
//
//    int no;
//    char name1[15], name2[15], name3[15];
//    printf("Enter serial number and name one\n");
//    scanf("%d %15c", &no, name1);
//    printf("%d %15s\n\n", no, name1);
//
//    printf("Enter serial number and name two\n");
//    scanf("%d %s", &no, name2);
//    printf("%d %15s\n\n", no, name2);

//    printf("Enter serial number and name one\n");
//    scanf("%d %", &no, name1);
//    printf("%d %15s\n\n", no, name1);

//    char address[80];
//    scanf("%[a-z]", address);
//    printf("%-80s\n\n", address);

//    int n = 236;
//    printf("%d\n", n);
//    printf("%5d\n", n);
//    printf("%-5d\n", n);
//    printf("%05d\n", n);
//    printf("%5ld\n", n);
//    printf("%5ld\n", -n);

//    float y = 98.7654;
//    printf("%7.4f\n",y);
//    printf("%12.2e\n", y);

    char str[20] = "NEW DELHI 110001";
    printf("%s\n", str);
    printf("%20s\n", str);
    printf("%20.10s\n", str);
    printf("%.5s\n", str);
    printf("%5s\n", str);


    return 0;
}

