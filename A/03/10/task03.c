#include<stdio.h>
int main()
{
	int n,m,k;
	
	int discount=0;
	int sum=0;
	scanf("%d",&n);
	scanf("%d",&m);
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
	printf("%d",sum);
}
