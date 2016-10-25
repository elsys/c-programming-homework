#include<stdio.h>
int main(){
	char n,opo,no;
	scanf("%c",&n);
	no=n-'a';
	opo='z'-no;
	printf("%c",opo);
	return 0;
}	
