#include<stdio.h>
int main(){
int m,s=0,i;
float a=0;
scanf("%d",&m);
while(m!=0){i=m%10;
            s=s+i;
            a++;
            m=m/10;}
a=(float)s/a;
if(a>7)printf("heavy");
else printf("light");
}
