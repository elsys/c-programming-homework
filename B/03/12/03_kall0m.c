#include <stdio.h>
int main()
{
	int n,m,k,i,total=0;
	float perc=0;
	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%d",&k);
	int j=k;
	for(i=0;i<n;i++){
	if(i==k){
	perc=perc+0.02;
	k=k+j;
	}
	total=total+m-m*perc;
	}
	printf("%d",total);

	return 0;
}
