#include<stdio.h>
int main(){
float avg;
float chislo,sum;
int n,i;
scanf("%d",&n);
sum=0;
for(i=0;i<=n;i++){
scanf("%f",&chislo);
sum=sum+chislo;
}
avg=sum/n;
printf("\nsum:%.0f",sum);
printf("\navg:%.2f",avg);
return 0;
}
