#include <stdio.h>

int main(){
	int n,m,k;
	float a=100,i;
	scanf("%d",& n);
	scanf("%d",& m);
	scanf("%d",& k);
	while(n>0)
	{
		i=i+k*(m*(a/100));
		n=n-k;
		a=a-2;
	}
	printf("%.0f",i);
}
