#include<string.h>
#include<stdio.h>
int main (){
int z,azb[26]={0},p=0;
char penco[1000];
fgets (penco,1000,stdin);
for(z=0;penco[z]!='\0';z++){if(penco[z]>='a'&&penco[z]<='z'){p=penco[z] - 'a';
                                                          azb[p]++;}
                           else if(penco[z]>='A'&&penco[z]<='Z'){p=penco[z]-'A';
                                                               azb[p]++;}}
z=0;
do{if(azb[z]!=0){ printf("%c - ",'a'+z);
                printf("%d\n",azb[z]);}
                z++;
  }while(z<26);
}
