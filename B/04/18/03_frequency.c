#include <stdio.h>
#include <string.h>

int main ()
{
	char s[1000];
	char b[27];
	int i,p,ok,m,k;
	fgets(s,1000,stdin);
	for(i=0;i<27;i++)
	{
		b[i]=0;
	}

	p=strlen(s);
	i=0;
	k=0;
	while(i<p)
	{
		ok=0;
		
		if(s[i]>='a' && s[i]<='z')
		{
			k=s[i]-'a';
		}
		else if(s[i]>='A' && s[i]<='Z')
		{	
			k=s[i]-'A';
		}
		else { ok=1; }
		i++;

	if(ok==0) 
	{
		b[k]++;
	}		
	
	}
	for (i=0;i<27;i++)
	{
		if(b[i]!=0)
		{
			m='a'+i;
			printf("%c - %d \n", m, b[i]);
		}
	}


	return 0;
}
