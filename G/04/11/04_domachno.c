#include<stdio.h>
int main (){
int i=0,j=0,brdodo=0,cialo=0,promiana=64;
float drugo,dodo[64],sumata=0,jorko;
while(scanf("%f",&drugo)!=EOF){while(j<64){if(dodo[j]==drugo){break;}
                                             else promiana--;
                                             j++;}
                                 j=0;
                                 if(promiana==0){dodo[brdodo]=drugo;
                                           brdodo++;}
                                 promiana=64;}
printf("%d",brdodo);
while(i<brdodo){cialo=dodo[i]/brdodo;
           jorko=dodo[i]-cialo*brdodo;
           sumata=sumata+jorko;
           i++;
           }
printf("\n%.3f",sumata);
}
