#include<stdio.h>

int main()
{
	float nmb1, nmb2, nmb3;
	
	scanf("%f", &nmb1);
        scanf("%f", &nmb2);
        scanf("%f", &nmb3);
	
	if(nmb1>nmb2)
	{
		if(nmb1>nmb3)
		{
			printf("%.1f\n", nmb1);		
		}
		else
		{
			printf("%.1f\n", nmb3);
		}
	}
	else
	{
		if(nmb2>nmb3)
		{
			printf("%.1f\n", nmb2);
		}
		else
		{
			printf("%.1f\n", nmb3);
		}
	}
return 0;
}	
