#include <stdio.h>
#include <string.h>

int main()
{
char s[1000];
int c[26]={0},i;
fgets(s,1000,stdin);

for(i=0;s[i]!='\0';i++){
if(s[i]>='A'&&s[i]<='Z'){s[i]=s[i]+32;}
}
for(i=0;s[i]!='\0';i++){
if(s[i]>='a'&&s[i]<='z'){c[s[i]-'a']++;}
}
i=0;
while(i<26){
if(c[i]!=0){printf("%c - %d\n",i+'a',c[i]);}
i++;
}
return 0;
}
