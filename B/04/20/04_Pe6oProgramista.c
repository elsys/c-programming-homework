#include<stdio.h>
int main()
{
	int i=0,flag=1,n=0,j;
	float sum=0,a,numbers[100];
	while(scanf("%f",&a)!=EOF)
	{
		for(j=0;j<i;j++)
		{
			flag=1;
			if(a==numbers[j])
			{
				flag=0;
				break;
			}
		}
		if(flag==0) continue;
		numbers[i]=a;
		n++;
		i++;	
	}
	for(i=0;i<n;i++)
	{
		int tquot=numbers[i]/n;
		sum+=numbers[i]-tquot*n;
	}
	printf("%d \n%.3f \n",n,sum);
}
