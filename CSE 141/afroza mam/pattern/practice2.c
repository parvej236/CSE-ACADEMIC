#include<stdio.h>
int main() 
{ 
int i, j, n=5;
for(i=1; i<=n; i++) { 
	for(j=i; j<=n; j++) {
		printf("%c",'A'+j-1);
	}
	printf("\n");
}
return 0;
}
