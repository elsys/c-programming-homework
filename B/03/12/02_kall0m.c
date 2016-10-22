#include <stdio.h>
int main()
{
	int n,sum=0,i=0;

	do{
	scanf("%d",&n);
	}while(n<=0 || n>=10000);

	while(n!=0){
	sum=sum+n%10;
	n=n/10;
	i++;
	}

	if(sum/i>7){
	printf("heavy");
	}
	else{
	printf("light");
	}

	return 0;
}
