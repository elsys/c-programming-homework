#include <stdio.h>

int main()
{
	int a[100], i, n, b, nech[100], cn, tuci;
	i = 0;
	cn = 0;
	b = 0;
	scanf("%d", &n);
	while(i < n)
	{ 
	  scanf("%d", &a[b]);
      	  if(a[b] % 2 != 0)
 	  {
	    nech[cn] = a[b];
	    cn++;
	    i++;
	  }
	  b++; 
	}
	
	for(b = 0; b < cn/2; b++) 
	{
	  tuci = nech[b] - nech[cn - (b + 1)];  
	  printf("%d",tuci); 
	}
	if(n % 2 != 0)
	{
	  printf("\n%d\n", a[(b / 2) + 1]);  
	}  
	return 0;
}



