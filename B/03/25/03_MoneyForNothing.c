#include <stdio.h>

int main() 
{ 
	int n,fin,i,m,k;
	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%d",&k);
	fin=0;
	for(i=0;i<n;i++)
	{
		fin=fin+m-(i/k*(2*m/100)); 
	}
	printf("%d\n",fin);
	return 0;
}
