#include<stdio.h>
#include<math.h>

int main()
{
	float n,a[64],b=0;
	int i=0,i2,f=0,common=0;
	for(i=0;scanf("%f", &n)!=EOF;i++)
	{
		if(i==0)
		{
			a[f]=n;
		}
		else
		{
			for(i2=0;i2<(i-1);i2++)
			{
				if(a[i2]==n)
				{
					common=1;
				}
			}
			if(common==0)
			{
				f++;
				a[f]=n;
			}
		}
		common=0;
	}
	printf("%d\n", f);
	for(i=0;i<=f;i++)
	{
		b=b+fmod(a[i],f);
	}
	printf("%.3f",b);
	return 0;
}
