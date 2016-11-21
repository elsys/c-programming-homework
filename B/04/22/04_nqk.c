#include<stdio.h>
#include<math.h>
int main()
{	
    int i=0, t=0, k=0;
    float sbor=0, broi;
    float mas1[64];
	
   while(scanf("%f", &broi)!=EOF)
	{
   
     
         t=0;
		for(k=0; k<sizeof(mas1); k++)
				{ 
				if(mas1[k]==broi)
				t=1;
				}
		if(t==0)
			{
			mas1[i]=broi;
			i++;	}
        }
		for(k=0; k<i; k++)
		{ 
			sbor=sbor+fmod(mas1[k], i);
		
		}	
	
                                   	printf("%d\n", i);
                                        printf("%.3f", sbor);
		

	return 0;		
}
