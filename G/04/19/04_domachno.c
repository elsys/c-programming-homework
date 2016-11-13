#include<stdio.h>
int main (){
int i,r=0,e,c,b=0;
float p,m[64],s=0,o;
for(i=0;scanf("%f",&p)!=EOF;i++){for(e=0;e<64;e++)if(m[e]==p){break;}else r++;
                                 if(r==64){m[b]=p;b++;}r=0;}
printf("%d",b);
for(e=0;e<b;e++){c=m[e]/b;o=m[e]-c*b;s=s+o;}
printf("\n%.3f",s);
}
