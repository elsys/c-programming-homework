#include<stdio.h>
int main(){
int n, i;
float  sum=0, avg=1;
scanf("%d", &n);
do{
sum=sum+n%10;
n=n/10;
i++;
}while(n>0);
avg=sum/i;
if(avg>7){printf("heavy");
}else{printf("light");}
return 0;
}
