#include<stdio.h>
#include<math.h>
int main()
{	
	int  j,i=0, a=0;
	float sum, count,pas[64];
	while(scanf("%f", &count)!=EOF)
	{
        	a=0;
		j=0;
		do
		{
			if(pas[j]==count)a=1;
			j++;
		}while(j<sizeof(pas));
		if(a==0)
		{
			pas[i]=count;
			i++;	
		}
        }
	sum=0;
	j=0;
	while(j<i)
	{
		sum+=fmod(pas[j],i);
		j++;
	}	
      	printf("%d\n", i);
	printf("%.3f", sum);	
	return 0;		
}
