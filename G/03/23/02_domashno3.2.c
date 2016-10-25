#include<stdio.h>
int main()
{
int n,b=0,i=0;
float a;
do{
scanf("%d", &n);
}while(n<1||n>9999);
while(n%10!=0){
b=b+n%10;
i++;
n=n/10;
}
a=(float)b/i;
if(a>7)
printf("heavy");
else
printf("light");
return 0;
}
