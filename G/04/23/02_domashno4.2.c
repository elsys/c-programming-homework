#include<stdio.h>
int main()
{
int n;
scanf("%d", &n);
int mas[n],i=0,p,b;
do
{
scanf("%d", &mas[i]);
if(mas[i]%2!=0)
i++;
}while(n>i);
for(p=0,i=n-1;i>=p;p++,i--){
if(i!=p){
b=mas[p]-mas[i];
printf("%d\n" ,b);}
else printf("%d", mas[p]);
}
return 0;
}
