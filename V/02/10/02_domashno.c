#include<stdio.h>
int main(){
float a,b,c,max;
printf("\n ");
scanf("%f",&a);
printf("\n ");
scanf("%f",&b);
printf("\n ");
scanf("%f",&c);
max=a;
if(b>max){
max=b;
}
if(c>max){
max=c;
}
printf("%.1f\n",max);
return 0;
}
