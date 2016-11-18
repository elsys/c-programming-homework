#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
char mass[1000];
int i,a,c;
fgets (mass,1000,stdin);
a=0;
do{
a++;
c=0;
i=0;
while(i<strlen(mass)){
if(mass[i]=='a'+a||mass[i]=='A'+a){c++;}
i++;
}
if(c!=0)
printf("%c - %d\n",'a'+a,c);
}while(a<26);
return 0;
}
