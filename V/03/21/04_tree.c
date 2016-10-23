#include <stdio.h>
int main(){
int h,i,c=1,g,s,s1,n=1,a,x=0;
scanf("%d",&h);
if(h<3){
n=0;
}
else{
for(i=1;i<=h-2;i++){
a=n;
while(a>0){
x++;
a--;
}
n=n+2;
}
}
printf("%d\n",x);
s=h-1;
for(i=1;i<=h;i++){
g=c;
s1=s;
while(s1>0){
printf(" ");
s1--;
}
while(g>0){
if(i!=h){
if(g==c||g==1){
printf("*");
}
else{
printf("#");
}
}
else{
printf("*");
}
g--;
}
printf("\n");
s--;
c=c+2;
}
return 0;
}
