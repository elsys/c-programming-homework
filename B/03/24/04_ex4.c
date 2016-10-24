#include <stdio.h>
int main()
{
int j, x, y, n=0;
scanf("%d", &x);
for(y=1; y<x-1; y++)for(j=0; j<y*2-1; j++)n++;
printf("%d\n", n);
for(j=0; j<x-1; j++) printf(" ");
printf("*");
for(j=0; y<x-1; j++) printf(" ");
printf("\n");
for(y=1; y<x-1; y++)
{
	for(j=x-y-1; j!=0; j--) printf(" ");
	printf("*");
	for(j=0; j<y*2-1; j++) printf("#");
	printf("*");
	for(j=x-y-1; j!=0; j--) printf(" ");
	printf("\n");
}
for(j=0; j<x*2-1; j++) printf("*");
return 0;
}
