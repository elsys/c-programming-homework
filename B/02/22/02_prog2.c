#include <stdio.h>
int main()
{

float st1, st2, st3;

scanf("%f", &st1);
scanf("%f", &st2);
scanf("%f", &st3);

if(st1>st2)
{
if(st1>st3)
printf("%.1f", st1);
else printf("%.1f", st3);
}
else if(st2>st3)
printf("%.1f", st2);
else printf("%.1f", st3);

return 0;
}
