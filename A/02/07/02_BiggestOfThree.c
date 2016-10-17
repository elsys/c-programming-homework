#include<stdio.h>
int main(){
	float a, b, c, max;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	max=a;
	if(max<b)max=b;
	if(max<c)max=c;
	printf("\n%.1f", max);
	return 0;
}
