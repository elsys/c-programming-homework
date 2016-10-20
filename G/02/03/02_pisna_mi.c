#include <stdio.h>
#include <stdlib.h>
int main(){
float chislo1,chislo2,chislo3,max;
scanf("%f",&chislo1);
scanf("%f",&chislo2);
scanf("%f",&chislo3);
if(chislo1<chislo2){
max=chislo2;}else{max=chislo1;}
if(max<chislo3){
max=chislo3;}
printf("%.1f\n",max);
return 0;
}
