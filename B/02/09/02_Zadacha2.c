#include<stdio.h>
int main()



{
	float i,l,v;

	scanf("%f",&i);
	scanf("%f",&l);
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
	printf("%.1f",max);
	return 0;



}
