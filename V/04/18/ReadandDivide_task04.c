#include<stdio.h>
#include<math.h>
int main()
{
	int count=0,inmass,i;
	float n;
	float mass[64];
	while(scanf("%f",&n)!=EOF)
	{
		inmass=1;
		for(i=0;i<count;i++)
		{
			if(mass[i]==n)
			{
				inmass=0;
			}
		}
		if(inmass==1)
		{
			mass[count]=n;
			count++;
		}
	}
	printf("%d\n",count);
	
	float sum=0;
	
	for(i=0;i<count;i++)
	{
		sum=sum+fmod(mass[i],count);
	}
	
	printf("%.3f\n",sum);
}
