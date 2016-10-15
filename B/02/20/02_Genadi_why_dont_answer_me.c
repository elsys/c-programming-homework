#include<stdio.h>
int main()
{
	float a,b,c;
	printf("input a:");
	scanf("%f",&a);
	printf("input b:");
	scanf("%f",&b);
	printf("input c:");
	scanf("%f",&c);
	if(a>=b){
		if(b>=c) printf("%f",a);
		else if(c>a) printf("%f",c);
		else printf("%f",a);
	}
	else{
		if(c>b) printf("%f",c);
		else printf("%f",b);
	}
}
