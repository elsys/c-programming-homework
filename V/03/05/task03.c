#include<stdio.h>

int main()
{
	int n,k,i,ots,a,b,m;
	float sum;

	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%d",&k);

	for(i=0;i<n;i++)
	{
		ots=i/k;
		a=ots*2;
		b=m*a/100;
		sum=sum+m-b;
		
	}
	printf("%.f",sum);

return 0;

}	
	
