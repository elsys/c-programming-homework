#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d", &n);
	int c[n+1];
	for(i=0; i<n; i++)
	  {
		scanf("%d", &c[i]);
  }
	for(i=n-1; i>=0; i--)
  { 
		printf("%d\n", c[i]); 
  }

return 0;
}
