#include<stdio.h>
int main (){
int a,b;
scanf("%d",&a);
int d[a];
b=0;
while (b<a){scanf("%d",&d[b]);
            b++;}
a--;
while(a>=0){printf("%d\n",d[a]);
            a--;}
}
