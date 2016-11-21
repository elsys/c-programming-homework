#include<string.h>
#include<stdio.h>
int main (){
int i,abc[26]={0},a=0,j;
char dodo[1000];
fgets (dodo,1000,stdin);
j=0;
while(dodo[j]!='\0'){if(dodo[j]>='a'&&dodo[j]<='z'){a=dodo[j] - 'a';
                                                    abc[a]++;}
                         else if(dodo[j]>='A'&&dodo[j]<='Z'){a=dodo[j]-'A';
                                                              abc[a]++;}
                 j++;}
i=0;
do{if(abc[i]!=0){ printf("%c - ",'a'+i);
                printf("%d\n",abc[i]);}
                i++;
  }while(i<26);
}
