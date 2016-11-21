#include <stdio.h>
#include <stdlib.h>
int main()
{
int shot[200],i,n;
//printf("vavedi chislo");
scanf("%d",&n);
 
for(i=0;i<n;i++)
{
//printf("vavedi chislo");
scanf("%d",&shot[i]);
}
for(i--;i>=0;i--)
{
printf("%d\n",shot[i]);
}


return 0;
}
