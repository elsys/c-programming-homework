#include <stdio.h>
int main() 
{
float a,b,c,max;
scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);
if(a>b){max=a;}
       else{max=b;}
if(max>c){printf("%.1f",max);}
       else{printf("%.1f",c);}
return 0;
}
