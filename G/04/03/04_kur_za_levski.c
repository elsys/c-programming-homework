#include<stdio.h>
int main (){
int i=0,e=0,br=0,c=0,pr=0;
float po,masiv[64],suma=0,ost;
while(scanf("%f",&po)!=EOF){while(e<64){if(masiv[e]==po){break;}
                                             else pr++;
                                             e++;}
                                 e=0;
                                 if(pr==64){masiv[br]=po;
                                           br++;}
                                 pr=0;}
printf("%d",br);
for(;i<br;i++){c=masiv[i]/br;
           ost=masiv[i]-c*br;
           suma=suma+ost;
           }
printf("\n%.3f",suma);
}
