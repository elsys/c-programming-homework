#include<stdio.h>
#include<stdlib.h>

int main()
{
 int n,i,j,p,h;

 scanf("%d",&p);
 h=(p-2)*(p-2);
 if(p>=1)
 printf("%d\n",h);
 for(n=0;n<p;n++){
 for(i=p-n;i>0;i--){
 printf(" ");}
 printf("*");
 for(j=0;j<n*2-1;j++){
 if(n==p-1)printf("*");
 else printf("#");}
 if(n!=0)printf("*");
 printf("\n");
 }
}
