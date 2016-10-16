#include<stdio.h>
int main()
{
	float a,b,c;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	if(a>b){
		if(a>c) printf("%.1f",a);
		else printf("%.1f",a);
	}
	else{
		if(c>b) printf("%.1f",c);
		else printf("%.1f",b);
	}
}
