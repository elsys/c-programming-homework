#include <stdio.h>

int main()
{
int n,k,i=0,b,c,e=0;
float m;
float a;
float o=0;
scanf("%d",&n);
scanf("%f",&m);
scanf("%d",&k);
c=m;
a=c*0.98;
b=m-a;
while(e<n){
    o=o+m;
    e++;
    i++;
    if(i==k){
        m=m-b;
        i=0;
        }
}
printf("\n %f",o);
    return 0;
}
