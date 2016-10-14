#include<stdio.h>
int main() 

	{
	  float a;
	  float b;
	  float c;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
          float max=a;
	
	if(max<b)
	{
	 max=b;
	      if(max<c)
		{
		 max=c;
		} 
	}
	else if(max<c){
	max=c;
	};
	printf("%.1f",max);
	return 0;
	}

