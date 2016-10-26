#include<stdio.h>
int main()
{
int n,i=0,j=1,c;
char symb1='*',symb2='#';
scanf("%d",&n);
printf("%d\n", (n-2)*(n-2));
while(n>0)
{
for(c=0;c<n;c++)printf(" ");
if(j==1)
{
printf("%c\n",symb1);
j++;
i++;
}
else if(n==1)
{
for(c=0;c<=j;c++)printf("%c",symb1);
}
else
{
printf("%c",symb1);
for(c=0;c<i;c++)printf("%c",symb2);
printf("%c\n",symb1);
j=j+2;
i=i+2;
}
n--;
}
return 0;
}


