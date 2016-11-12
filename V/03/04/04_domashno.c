#include <stdio.h>

int main()
{
int h,d,d_total,l,i;

scanf("%d",&h);

d=0;
l=h-1;
if(h>2){
d_total=(h-2)*(h-2);
}
else{
d_total=0;}

printf("\n%d",d_total);

while(l>0)
{
printf("\n");
for(i=0;i<l;i++){
printf(" ");
}
printf("*");

if(l==h-1){
d=1;
}

else{
for(i=0;i<d;i++){
printf("#");
}
printf("*");
d=d+2;
}
l--;
}
printf("\n");
if(h>2){
for(i=0;i<d+2;i++){
printf("*");
}
}
else{
if(h==2){
printf("***");
}
if(h==1){
printf("*");
}
}
printf("\n");
return 0;
}
