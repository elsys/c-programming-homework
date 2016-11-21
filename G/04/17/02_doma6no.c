#include <stdio.h>

int main() {
int n,i,b;

scanf("%d", &n);

int p[n];

for(i=0;i<n;i++)
{
	do{	scanf("%d", &b);
	   
}while(b%2==0);
	p[i]=b;
}

for(i=0;i<n/2;i++)
{
printf("\n%d", p[i]-(p[n-i-1]));
if(n%2!=0) printf("\n%d", p[n/2]);
}
return 0;
}




