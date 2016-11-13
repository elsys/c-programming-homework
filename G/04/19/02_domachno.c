#include<stdio.h>
int main (){
int n,p,e,i;
scanf("%d",&n);
int m[n];
for(e=0;e<n;){scanf("%d",&p);if(p%2==1){m[e]=p;e++;}}
for(i=0;i<e;i++)if(i==e)printf("%d",m[e-1]);
                else {printf("%d\n",m[i]-m[e-1]);e--;}
}
