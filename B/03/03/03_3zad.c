#include <stdio.h>

int main()
{
	int n, m, k, z, i, sum;
	scanf("%d", &n);
	scanf("%d", &m);
	scanf("%d", &k);
	sum = k * m; 
	z = m * 0.98;
	for(i = k + 1; ; i++)
	{
	  if(i == n + 1){ break;} 
	  sum = sum + z ;
	  if(i % k == 0)
	   {
	     z = z * 0.98; 
	   }	
	}
	printf("%d", sum);

	return 0;
}
