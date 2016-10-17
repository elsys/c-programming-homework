#include <stdio.h>
int main() 
{
float a,b,c,max;
printf("\n Iclude number1:");
scanf("%f",&a);
printf("\n Iclude number2:");
scanf("%f",&b);
printf("\n Iclude number3:");
scanf("%f",&c);
if(a>b){max=a;
       }else{max=b;}
if(max>c){printf("%.1f",max);
         }else{printf("%.1f",c);
              }
return 0;
}
}
