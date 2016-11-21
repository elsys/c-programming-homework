#include<stdio.h>
int main()
{
int broi,br;
int mas[broi];

scanf("%d", &broi);

for(br=0;br<broi;br++)
{
scanf("%d",&mas[br]);
}
for(br=broi-1;br>=0;br--)
{
printf("%d\n",mas[br]);
}
return 0;
}



