#include <stdio.h>
#include <stdlib.h>
int main()
{
  int w,b,u;
  b=0;
	scanf("%d",&w);
for (u=0;w!=0;w=w/10,b++)
  u=u+w%10;
  u=u/b;
if (u>7)printf("heavy\n");
   else printf("light\n");
  
return 0;
}
