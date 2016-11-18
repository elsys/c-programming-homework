#include <stdio.h>
#include <string.h>

int main ()
{
	char s[1000];
	char b[27];
	int i,q,oki,m,k;
	fgets(s,1000,stdin);
	i=0;
	while(i<27){
        b[i]=0;
        i++;
	}
	q=strlen(s);
	i=0;
	k=0;
	while(i<q)
	{
		oki=0;

		if(s[i]>='a' && s[i]<='z')
		{
			k=s[i]-'a';
		}
		else if(s[i]>='A' && s[i]<='Z')
		{
			k=s[i]-'A';
		}
		else { oki=1; }
		i++;

	if(oki==0)
	{
		b[k]++;
	}

	}
	i=0;
	while(i<27){
        if(b[i]!=0)
		{
			m='a'+i;
			printf("%c - %d \n", m, b[i]);
		}
		i++;
	}
	return 0;
}

