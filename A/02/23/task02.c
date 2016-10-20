#include<stdio.h>

int main() {
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	if(a>b){
	if(a>c)printf("%.1f",a);
	else printf("%.1f",c);
	}else if(b>c)printf("%.1f",b);
	else printf("%.1f",c);
}
