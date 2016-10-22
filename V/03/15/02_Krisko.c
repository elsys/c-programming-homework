#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	float avg;
	scanf("%d", &n);
	while(n>0)
	{
		sum = sum + n%10;
		n = n/10;
		i++;
	}
	avg = sum / i;
	if ( avg>7)
	{
		printf("heavy");
	}
	else
	{
		printf("light");
	}
	  





        /*while(1)
        {
                cifra = n%10;
                sum = sum + cifra;
                i++;
                n = n/10;
                if(n==0)
                {
                        break;
                }
        }
        avg = sum / i;
	*/
}
