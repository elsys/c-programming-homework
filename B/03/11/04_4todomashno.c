#include <stdio.h>
int main()
{
  int i,t=0,c,k,broi=1,p=0,sum=0,space,rows=0;

scanf("%d",&rows);
space=rows-1;
for(p=2;p<=rows-1;p++)
{
sum+=broi;
broi=broi+2;
}
printf("%d\n",sum);

  for(i=1;i<=rows;i++)
  {

if(i==rows)
{for(t=0;t<(rows*2)-1;t++)printf("*");
break;}
 for(c=1;c<space;c++)
{    
    printf(" ");
}
if(i==1){printf(" *\n");continue;}
for(k=1;k<(i*2)-1;k++)
{ 
if(k==1)printf("*");
else printf("#");
}
printf("*");
space--;
printf("\n");   
 }
 return 0;
}
