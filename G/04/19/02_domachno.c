#include<stdio.h>
int main (){
int n,p,e,i;
scanf("%d",&n);
int m[n];
for(e=0;e<n;){scanf("%d",&p);if(p%2==1){m[e]=p;e++;}}
for(i=0;i<n/2;i++){
printf("%d\n", (m[i]-m[n-i-1]));
if(n%2!=0)printf("%d",m[n/2]);}
}
