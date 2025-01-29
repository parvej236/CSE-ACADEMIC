#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    gets(str);

    int i = 0, vowel = 0;
    while(str[i]!='\0'){
        if(tolower(str[i]) == 'a' || tolower(str[i]) == 'e' ||
         tolower(str[i]) == 'i' || tolower(str[i]) == 'o' ||
         tolower(str[i]) == 'u'){
                vowel++;
        }
        i++;
    }

    int size = strlen(str);
    int consonants = size - vowel;

    printf("Vowels : %d\n", vowel);
    printf("Consolants: %d\n", consonants);
}
