#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int n,p,i;
char str[1000];
char malki[26]="abcdefghijklmnopqrstuvwxyz";
char glavni[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
fgets(str,1000,stdin);
for(n=0;n<26;n++)
for(p=0,i=0;p<strlen(str)-1;p++)
{
if ((str[p]>'a' && str[p]<'z')||(str[p]>'A' && str[p]<'z'))
{
if(str[p]==malki[n]||str[p]==glavni[n])
i++;
}
if(p==strlen(str)-2 && i>0)
printf("%c - %d\n",malki[n],i);
}
return 0;
}
