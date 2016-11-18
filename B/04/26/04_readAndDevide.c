#include<stdio.h>
#include <math.h>
int main()
{
	int i, countNR = 0;
	float numbers[100];
	float nonRepeatable[100], sum = 0;
	for(i = 0; scanf("%f", &numbers[i]) != EOF; i++)
		;
	int n = i;

	nonRepeatable[countNR] = numbers[0];
	countNR++;
	
	for(i = 1; i < n; i++)
	{
		int unique = 1; 
		for(int j = i - 1; j >= 0; j--)
		{
			if(numbers[i] == numbers[j])
			{
				unique = 0;
				break;
			}
		}
		if(unique == 1)
		{
			nonRepeatable[countNR] = numbers[i];
			countNR++;		
		}
	}
	for(i = 0; i < countNR; i++)
	{
		sum += fmod(nonRepeatable[i], (float)countNR);
	}
	printf("%d\n%.3f", countNR, sum);
	return 0;
}
