#include<stdio.h>

int main(){
	char n;
	scanf("%c",&n);
	n='z'-n;
	n=n+'a';
	printf("%c",n);
}
