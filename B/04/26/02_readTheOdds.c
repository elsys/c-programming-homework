#include<stdio.h>
int main()
{
	int n, middle, i, j;
	
	scanf("%d", &n);

	int number, numbers[n];
	
	if(n % 2 == 0)
	{
		middle = n / 2;
	}else{
		middle = (n / 2) + 1;			
	}
	j = 0;
	i = n;
	while(i != 0)
	{
		scanf("%d", &number);
		if(number % 2 == 1)
		{
			numbers[j] = number;
			i--;
			j++;
		}	
	}
	for(i = 0, j = n-1; i < middle; i++, j--)
	{
		if(i == j)
		{
			printf("%d\n", numbers[i]);
		}else{
			int div = numbers[i] - numbers[j];
			printf("%d\n", div);
		}
	}


	return 0;
}
