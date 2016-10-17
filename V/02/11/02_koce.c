#include<stdio.h>
int main(){                                                                     float a;
float b;
float c;
printf("\n");
scanf("%f",&a);
printf("\n");
scanf("%f",&b);
printf("\n");
scanf("%f",&c);
if(a>b&&a>c){
printf("%f\n",a);                                                               }
else if(b>a&&b>c){
printf("%f\n",b);
}
else if(c>a&&c>b){
printf("%f\n",c);
}
return 0;
}
