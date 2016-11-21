#include <stdio.h>
#include <stdlib.h>

int main()
{ int a[26]={0};
char s[1001];
fgets(s,1001,stdin);
int i=0,j=0;
while(s[j]!='\0')
{ if(s[j]>='a'&&s[j]<='z')
{i=s[j] - 'a';
a[i]++;}
if(s[j]>='A'&&s[j]<='Z')
{i=s[j] - 'A';
a[i]++;}
j++;
}
for(i=0;i<26;i++)
{ if(a[i]!=0)
{ printf("%c - ", 'a'+i);
printf("%d \n", a[i]);}
}
}
