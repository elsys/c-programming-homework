#include<stdio.h>
int main()
{
char n,m;
printf("Input small english letter:");
scanf("%c",&n);
m='z'-(n-'a');
printf("%c\n",m);
return 0;
}

