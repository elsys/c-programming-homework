#include <stdio.h>
int main()
{

int i, n, k, l;
l = 0;
scanf("%d", &n);
for(k=1; k<n-1; k++)
for(i=0; i<k*2-1; i++)
{l++;}
printf("%d\n", l);
for(i=0; i<n-1; i++) printf(" ");
printf("*");
for(i=0; k<n-1; i++) printf(" ");
printf("\n");
for(k=1; k<n-1; k++)
{
	for(i=n-k-1; i!=0; i--) printf(" ");
	{printf("*");}
	for(i=0; i<k*2-1; i++) printf("#");
	{printf("*");}
	for(i=n-k-1; i!=0; i--) printf(" ");
	{printf("\n");}
}

	for(i=0; i<n*2-1; i++) 

		{printf("*");}

	return 0;
}
