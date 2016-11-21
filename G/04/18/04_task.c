#include<stdio.h>
int main (){
int a,b,c,d,i;
float s,arr[64],k,o;
 a=0;
 b=0;
 s=0;
 i=0;
 d=0;
 while(scanf("%f",&k)!=EOF){for(d=0;d<64;d++)if(arr[d]==k){break;}
                                                   else a++;
                                  if(a==64){arr[b]=k;
                                            b++;}
                                  a=0;
                                  i++;}
 printf("%d",b);
 d=0;
 do{c=arr[d]/b;
    o=arr[d]-c*b;
    s=s+o;
    d++;
   }while(d<b);
 printf("\n%.3f",s); }
