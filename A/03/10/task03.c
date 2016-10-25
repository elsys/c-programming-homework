#include<stdio.h>
int main()
{
	int n, k;
	float m=0;
	int discount=0;
	float sum=0;
	scanf("%d",&n);
	scanf("%f",&m);
	scanf("%d",&k);
	if(k>=n){
	sum=n*m;
	}else{
		while(k<=n)
		{
			sum=sum+k*(m-(discount*m)/100);
			n=n-k;
			discount=discount+2;	
		}
	}
	printf("%.2f",sum);
}
