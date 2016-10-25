#include<stdio.h>
int main(){
int m,r=0,s,x;
scanf("%d",&m);
s=m-2;
printf("%d",s*s);
s=m;
while(r<=m){r++;s--;printf("\n");
for(x=s;x>=1;x--)printf(" ");
if(r==1)printf("*");
else if(r==m){for(x=m*2-1;x>=1;x--)printf("*");break;}
     else { printf("*");r--;for(x=r*2-1;x>=1;x--)printf("#");r++;
            printf("*");}}}
