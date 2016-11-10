#include <stdio.h>
int main()
{
int a, b, c, d=0;
scanf("%d", &b);
for(c=1; c<b-1; c++)for(a=0; a<c*2-1; a++)d++;
printf("%d\n", d);
for(a=0; a<b-1; a++) printf(" ");
printf("*");
for(a=0; c<b-1; a++) printf(" ");
printf("\n");
for(c=1; c<b-1; c++)
{
	for(a=b-c-1; a!=0; a--) printf(" ");
	printf("*");
	for(a=0; a<c*2-1; a++) printf("#");
	printf("*");
	for(a=b-c-1; a!=0; a--) printf(" ");
	printf("\n");
}
for(a=0; a<b*2-1; a++) printf("*");
return 0;
}
