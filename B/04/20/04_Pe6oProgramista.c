#include<stdio.h>
int main()
{
	int i,flag,n=0,j;
	float sum=0,a,numbers[100];
	for(i=0;scanf("%f",&a)!=EOF;i++)
	{
		if(i==0) numbers[i]=a;
		for(j=0;j<i;j++)
		{
			flag=1;
			numbers[i]=a;
			if(a==numbers[j])
			{
				flag=0;
				break;
			}
		}
		if(flag==0) continue;
		n++;
		
	}
	for(i=0;i<n;i++)
	{
		int tquot=numbers[i]/n;
		sum+=numbers[i]-tquot*n;
	}
	printf("%d \n%f \n",n,sum);
}
