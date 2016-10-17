#include<stdio.h>
int main(){
	unsigned char n,n2,number;
	scanf("%c",&n);
	if(n<='m'){
		n2='m'-n;
		number='m'+n2+1;
	}
	if(n>='n'){
		n2=n-'n';
		number='n'-n2-1;
	}
	printf("%c",number);
}
