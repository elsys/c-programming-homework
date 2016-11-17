#include<string.h>
#include<stdio.h>
int main (){
int a=0,azbuka[26]={0},b=0,c=0;
char salata[1000];
fgets (salata,1000,stdin);
while(salata[a]!='\0'){if(salata[a]>='a'&&salata[a]<='z'){b=salata[a] - 'a';
                                                          azbuka[b]++;}
                       else if(salata[a]>='A'&&salata[a<='Z']){b=salata[a]-'A';
                                                               azbuka[b]++;}
                       a++;}
while(c<26){if(azbuka[c]!=0){ printf("%c - ",'a'+c);
                             printf("%d\n",azbuka[c]);}
           c++;}
}
