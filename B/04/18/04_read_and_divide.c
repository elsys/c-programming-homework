#include <stdio.h>


int main ()
{
	float s[1000],d,all;
	int i,k,broi;
	all=0;
	broi=0;
	i=0;
	while(scanf("%f",&d)!=EOF)
	{
		k=0;
		for(i=0;i<64;i++)
		{
		
			if(s[i]==d) { k=1; }
			
		}
		if(k==0)
		{
			s[broi]=d;
			broi++;
		}
		i++;
		
	}	
	printf("%d\n",broi);

	for(i=0;i<broi;i++)
	{
		do
		{
			s[i] = s[i]-broi;
		}while(s[i]>=0);
		all=all+(s[i]+broi);
	}
	
	printf("%.3f",all);




	return 0;
}
