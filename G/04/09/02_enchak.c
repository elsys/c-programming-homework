#include <stdio.h>
#include <stdlib.h>
int main()
{
int n=0,i=0,j=0,e=0;

//printf("integer lengh of masiv");
scanf("%d",&n);
int shot[100];

for(i=0;i<n;)
{
//printf("inter poredno");
scanf("%d",&e);

if(e%2==1)
{
shot[i]=e;
i++;
}
}

for(i=0;i<n/2;i++)
{
j=shot[i]-shot[n-i-1];
printf("%d\n",j);
}

if(n%2!=0)
{
printf("%d\n",shot[n/2]);
}



return 0;
}

