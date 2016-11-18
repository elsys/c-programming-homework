#include <stdio.h>

int main()
{
	float num,sum=0,arr[64];
	int n=0,i,j,c;
	for(i=0;scanf("%f",&num)!=EOF;i++)
	{
	 	c=0;
		for(j=0;j<i;j++)
		{
			if(num==arr[j])
			{
				c++;
				
			}
		}
		if(c==0)
		{
			arr[n]=num;
			n++;
		}
	}
	printf("%d\n",n);

	for(i=0;i<n;i++)
	{
		while(arr[i]>=0)
		{
			arr[i]=arr[i]-n;
		}
		sum=sum+(arr[i]+n);
	}
	printf("%.3f",sum);

	return 0;
}
