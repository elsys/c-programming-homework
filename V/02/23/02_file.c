#include <stdio.h>
int main()
{
    float a, b, c, max;
    scanf("%f %f %f", &a, &b, &c);
     max=a;
	if(b>max){
		max=b;
	}
	if(c>max){
		max=c;
	}
	printf("%.1f",max);
}
