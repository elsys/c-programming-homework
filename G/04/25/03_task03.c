#include <stdio.h>
#include <string.h>
int main()
{
char s[1000];
fgets (s,1000,stdin);
int i=0,j,c;
do
{
c=0;
j=0;
while(j<strlen(s))
{
if(s[j]=='a'+i){c++;}
if(s[j]=='A'+i){c++;}
j++;}
if(c!=0){printf("%c - %d\n",'a'+i,c);}
i++;
}while(i<26);
return 0;
}
