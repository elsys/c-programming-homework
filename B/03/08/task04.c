#include <stdio.h>
int main()
{
int i, n, t, p=0;
scanf("%d", &n);
for(t=1; t<n-1; t++)for(i=0; i<t*2-1; i++)p++;
printf("%d\n", p);
for(i=0; i<n-1; i++) printf(" ");
printf("*");
for(i=0; t<n-1; i++) printf(" ");
printf("\n");
for(t=1; t<n-1; t++)
{
	for(i=n-t-1; i!=0; i--) printf(" ");
	printf("*");
	for(i=0; i<t*2-1; i++) printf("#");
	printf("*");
	for(i=n-t-1; i!=0; i--) printf(" ");
	printf("\n");
}
for(i=0; i<n*2-1; i++) printf("*");
return 0;
}
