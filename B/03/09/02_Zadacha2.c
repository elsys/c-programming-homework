#include <stdio.h>
 

int main()
{
	 int k, i;
	float sum;
	sum=0;
	i=0;
	 scanf("%d", &k);
 
  	 while (k != 0)

	{
		i++;
     		 sum = sum + k%10;
     		 k = k / 10;
  	 }

	 if(sum/i>7)
       	{
       		 printf("heavy");
	 }
	  else
	{
       		 printf("light");
	}

} 

