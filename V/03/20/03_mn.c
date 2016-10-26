#include<stdio.h>
int main(){
int z, d, r=0, g, a=0, y=0;
scanf("%d%d%d", &z, &d, &g);
r=(d*2)/100;
for(;z!=0;z--, y++){
if(y==g){
d=d-r;
y=0;
}
a=a+d;
}
printf("%d", a);
return 0;
}
