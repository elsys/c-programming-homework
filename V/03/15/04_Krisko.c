#include <stdio.h>
int main()
{
	int height,k,i,j,row=1,z=1,sum,hashtag;
	scanf("%d", &height);
	k=height;
	if ( height <= 2 ) {
		sum = 0;
	} else
	{

		hashtag = 1;
		sum = 1;
		for ( i = 1; i < height - 2; i++) 
		{ 
			hashtag = hashtag + 2;
			sum = sum + hashtag;
		}
	}
	printf("%d\n", sum);
	for(i=0;i<k-1;i++)
	{

		for(j=1;j<height;j++)
		{
			printf(" ");
		}
		if(row==1)
                        {
                        printf("*\n");
                        }

	        
		for(j=0;j<row;j++)
		{
			if (row!=1 )
			{
				
				printf("*");
				for(j=0;j<z;j++)
				{
					printf("#");	
				}
				printf("*\n");
				z+=2;
			}
		
		}
		
		if(i==k-2)
		{
		  for(j=0;j<z+2;j++)
 	         {
               	 printf("*");
       		 }

		}
		row++;
		height--;
		
	}
	
	//for(j=0;j<z+2;j++)
	//{
	//	printf("*");
	//}
	//printf("%d", z);
	return 0;
	
	
	
}
