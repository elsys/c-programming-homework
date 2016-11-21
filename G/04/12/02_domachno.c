#include<stdio.h>
int main (){
int z,l,a,t;
a=0;
t=0;
scanf("%d",&z);
int popo[z];
while(a<z){scanf("%d",&l);
if(l%2==1){popo[a]=l;
a++;}}
do{printf("%d\n",(popo[t]-popo[z-t-1]));
if(z%2!=0)printf("%d",popo[z/2]);
t++;}while(t<z/2);
}
