#include <stdio.h>
#include <string.h>
int main()
{
	char s[1001],a='A';
	fgets(s,1001,stdin);
	int l=strlen(s),i,j;
	while(a!='Z')
	{
		for(i=0;i<l;i++)
		{
			if(s[i]==a)s[i]+=32;
		}
		a++;
	}
	a='a';
	while(a!='z')
	{
		j=0;
		for(i=0;i<l;i++)
		{
			if(s[i]==a)j++;
		}
		if(j!=0)
		{
			printf("\n%c - %d",a,j);
		}
		a++;
	}
	return 0;
}
