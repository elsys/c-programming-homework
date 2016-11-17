#include <stdio.h>

int contains(float *array, float number, int to)
{
	for(int i = 0; i < to; i++)
	{
		if(array[i] == number) 
		{
			return 1;
		}
	}

	return 0;
}

int main()
{
	float numbers[64];
	int i;
	float sum = 0;
	for(i = 0; scanf("%f", &numbers[i]) != EOF;)
	{
		if(!contains(numbers, numbers[i], i))
		{
			i++;
		}
	}
	int count = i;
	for(i = 0; i < count; i++)
	{
		sum += numbers[i] - count * (int)(numbers[i] / count);
	}
	
	printf("%d\n%.3f", count, sum);	

	return 0;
}
