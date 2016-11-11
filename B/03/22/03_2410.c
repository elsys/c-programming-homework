#include<stdio.h>
int main()
{
int n, k, sum;
float m, a;
scanf("%d", &n);
scanf("%f", &m);
scanf("%d", &k);

sum=k*m;
a=0.02*m;
n=n-k;
do{

m=m-a;
sum=sum+k*m;
n=n-k;
}
while(n-k>=0);
if(n!=0){
sum =sum + n*(m-a);
}
printf("%d", sum);
return 0;
}
