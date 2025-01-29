#include<stdio.h>

int main(){
    // FILE *fp1, *fp2;
    // fp1 = fopen("input1.txt", "r");
    // fp2 = fopen("output1.txt", "w");

    // char ch;
    // while(1){
    //     ch = getc(fp1);
    //     if(ch == EOF) break;
    //     else if (ch == 'a' || ch == 'e') continue;
    //     putc(ch, fp2);
    // }
    // fclose(fp1);
    // fclose(fp2);

    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);

      char ch;
    // Read characters until EOF
    while (scanf("%c", &ch) == 1) {
        printf("%c", ch);
    }

    fclose(stdin);
    fclose(stdout);
    
}