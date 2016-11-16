#include<stdio.h>
int main (){
int n,i;
scanf("%d",&n);
int m[n];
for(i=0;i<n;i++)scanf("%d",&m[i]);
n--;
for(;n>=0;n--)printf("%d\n",m[n]);
}
