#include <stdio.h>

int main()
{
	float input,arr[64];
	int check, n = 0;
	for(int i = 0;scanf("%f",&input) != EOF;i++)
	{
	 	check = 0;
		for(int j = 0;j < i;j++)
		{
			if(input == arr[j])
			{
				check++;
				break;
			}
		}
		if(check == 0)
		{
			arr[n] = input;
			n++;
		}
	}
	printf("%d\n",n);
	float sum = 0;
	for(int i = 0;i < n;i++)
	{
		do
		{
			arr[i] -=  n;
		}while(arr[i] >= 0);
		sum += (arr[i] + n);
	}
	printf("%.3f",sum);

	return 0;
}
