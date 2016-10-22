#include <stdio.h>
int main()
{
	int n,i,j,last,symbol,hash=0;
	scanf("%d",&n);
	for(i=1;i<=n-2;i++){
	hash=hash+i*2-1;
	}
	printf("%d\n",hash);
	for(i=1;i<=n;i++){
	for(j=0;j<n-i;j++){
	printf(" ");
	}
	if(i==n){
	for(last=1;last<=n+n-1;last++){
	printf("*");
	}
	continue;
	}
	printf("*");
	if(i>=2){
	for(symbol=2;symbol<i*2-1;symbol++){
	printf("#");
	}
	printf("*");
	}
	printf("\n");
	}
	
	return 0;
}
