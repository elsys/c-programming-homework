#include<stdio.h>

int main() {
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if(a>b){
	if(a>c)printf("%f",a);
	else printf("%f",c);
	}else if(b>c)printf("%f",b);
	else printf("%f",c);
}
