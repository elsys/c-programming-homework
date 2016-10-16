#include <stdio.h>
int main(){
	char a,b;
	printf("\n Enter a letter:");
	scanf("%c", &a);
	b='z'-(a-'a');
	printf("\n The opposite letter is:%c",b);
return 0;
}

