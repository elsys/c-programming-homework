#include<stdio.h>
int main (){
int z,l,a,t;
z=0;
l=0;
a=0;
t=0;
float i,pecho[64],su,m;
su=0;
while(scanf("%f",&i)!=EOF){while(z<64){if(pecho[z]==i){break;}
else t++;
z++;}
z=0;
if(t==64){pecho[l]=i;
l++;}
t=0;}
printf("%d",l);
z=0;
do{a=pecho[z]/l;
m=pecho[z]-a*l;
su=su+m;
z++;}while(z<l);
printf("\n%.3f",su);
}
