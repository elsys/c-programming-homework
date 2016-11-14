#include<stdio.h>
int main()
{
	int i,match=0,unmatch=0;
	float arr[64];
	float num,sum,del;
	while(scanf("%f", &num)!=EOF)
	{
		
		for(i=0;i<64;i++)
		{
			if(arr[i] == num)
			{
				match = 1;
			}
		}
		if(match == 0)
		{
			arr[unmatch]=num;
			unmatch++;
			
		}
		match = 0;
	}
	for(i=0;i<unmatch;i++)
	{
		del = arr[i];
		while(del - unmatch >= 0)
		{
			del = del-unmatch;
		}
		sum+=del;
	}
	printf("%d\n", unmatch);
	printf("%.3f", sum);




}
