#include<string.h>
#include<stdio.h>
int main (){
int i,buk[26]={0},k;
k=0;
i=0;
char sen[1000];
fgets (sen,1000,stdin);
while(sen[i]!='\0'){if(sen[i]>='a'&&sen[i]<='z'){k=sen[i] - 'a';buk[k]++;}
                          else if(sen[i]>='A'&&sen[i<='Z']){k=sen[i]-'A';buk[k]++;}
                    i++;}
i=0;
do{if(buk[i]!=0){ printf("%c - ",'a'+i);
                  printf("%d\n",buk[i]);}
                  i++;
  }while(i<26);
}
