#include<stdio.h>
int main()
{
int s=1,j,z=0;
float mas[64],t,sum=0;
for(j=0;scanf("%f", &t)!=EOF;){
for(int i=0;i<j;i++){
s=1;
if(mas[i]==t){
s=0;
break;}}
if(s==1){
mas[j]=t;
z++;j++;}
}
printf("%d\n", z);
for(int i=0;i<j;i++){
while(1){
if(mas[i]-z>=0)
mas[i]=mas[i]-z;
else
break;}
sum=mas[i]+sum;
}
printf("%.3f", sum);
return 0;
}
