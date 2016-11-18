#include <stdio.h>
#include <stdlib.h>
int main(){
int i,n,a,x,z;
float mass[64],m,b,f,p;
i=0;f=0;
do{x=0;a=0;
while(a<i){
a++;
if(mass[a]==m){x=1;}
}
mass[i]=m;
if(x==0)i++;}
while((scanf("%f",&m))!=EOF);
n=i;
printf("%d\n",n);
i=0;
while(i<n){
b=mass[i];
p=mass[i];
z=0;
i++;
while(p-n>=0){
p=p-n;
z++;}
b=mass[i]-z*n;
f=b+f;}
printf("%.3f\n",f);
return 0;
}
