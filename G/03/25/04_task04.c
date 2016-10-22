#include <stdio.h>
int main()
{
int n,i,j,p=0;
scanf("%d",&n);
for(i=1;i<n-1;i++)
for(j=0;j<i*2-1;j++)p++;
printf("%d\n",p);
for(j=0;j<n-1;j++) printf(" ");
printf("*");
for(j=0;i<n-1;j++) printf(" ");
printf("\n");
for(i=1;i<n-1;i++)
{
for(j=n-i-1;j!=0;j--) printf(" ");
printf("*");
for(j=0;j<i*2-1;j++) printf("#");
printf("*");
for(j=n-i-1;j!=0;j--) printf(" ");
printf("\n");
}
for(j=0;j<n*2-1;j++) printf("*");
return 0;
}
