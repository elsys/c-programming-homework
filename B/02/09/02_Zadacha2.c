#include<stdio.h>
int main()



{
	float i,l,v;
	
	printf("Input i:");
	scanf("%f",&i);
	printf("Input l:");
	scanf("%f",&l);
	printf("Input v:");
	scanf("%f",&v);
	float max=i;
	
	if(max<l)
	{
		max=l;
			if(max<v)
			{
		        	max=v;
			}	
	
	}
	
	else if(max<v)
	{
		max=v;
	}
	printf("%.3f",max);
	return 0;



}
