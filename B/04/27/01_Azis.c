#include<stdio.h>
int main()
{
int n,i,j;
int habibi[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
        scanf("%d",&habibi[i]);
}
for(j=n-1;j>=0;j--)
{
        printf("%d\n",habibi[j]);
}
return 0;
}             
