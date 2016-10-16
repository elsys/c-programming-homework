#include<stdio.h>
int main(){
	int a;
	unsigned char n,i=0,n2,number;
	printf("bukva\n");
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
