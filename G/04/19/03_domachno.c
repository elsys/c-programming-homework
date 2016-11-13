#include<string.h>
#include<stdio.h>
int main (){
int i,a[26]={0},e=0;
char m[1000],b;
fgets (m,1000,stdin);
for(i=0;m[i]!='\0';i++)if(m[i]>='a'&&m[i]<='z'){e=m[i] - 'a';a[e]++;}
                       else if(m[i]>='A'&&m[i<='Z']){e=m[i]-'A';a[e]++;}
for(i=0;i<26;i++)if(a[i]!=0){ printf("%c - ",'a'+i);printf("%d\n",a[i]);}
           }
