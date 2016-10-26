#include <stdio.h>
int main()
{
	 int n,m,k,i,p;
	
	scanf("%d %d %d",&n,&m,&k);

		p=0;

		for(i=0;i<n;i++){
			p=p+m-(i/k*(2*m/100)); 
				}

		printf("%d\n",p);


	return 0;
}
