#include<stdio.h>
int main()
{
int n,m,k,s=0;
do{
scanf("%d", &n);
scanf("%d", &m);
scanf("%d", &k);
}while(k>n||k<0||m<0||n<0);
n=n-k;
s=k*m;
for(int i=2;n-k>=0;i+=2)
{
n=n-k;
s=s+k*m*(100-i)/100;
}
printf("%d", s);
return 0;
}
