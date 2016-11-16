#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int s,i,j;
char vurtoleta[1000];
char galin[26]="abcdefghijklmnopqrstuvwxyz";
char cvetelina[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
fgets(vurtoleta,1000,stdin);
for(j=0;j<26;j++)
for(s=0,i=0;s<strlen(vurtoleta)-1;s++)
{
	if((vurtoleta[s]>='a' && vurtoleta[s]<='z')||(vurtoleta[s]>='A' && vurtoleta[s]<='Z')) 
	{
		if(vurtoleta[s]==galin[j]||vurtoleta[s]==cvetelina[j])
		i++;
	}
		if(s==strlen(vurtoleta)-2)
                if(i>0)
                printf("%c - %d\n",galin[j],i);
}
return 0;
}
