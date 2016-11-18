#include <stdio.h>
#include <string.h>

int main()
{
	char a[1000], help[1000], b='a';
	fgets(a,1001,stdin);
	int i=0, h=0, lc=0, sl=strlen(a);
	do
	{
		if(a[i]>='A'&&a[i]<='Z')a[i]=a[i]+32;
		i++;
	}while(i<sl);
	i=0;
	do
	{
		if(a[i]>='a'&&a[i]<='z'){help[h]=a[i]; h++;}
		i++;
	}while(i<sl);
	do
	{
		for(i=0, lc=0;i<strlen(help); i++)if(help[i]==b)lc++;
		if(lc!=0)printf("%c - %d\n", b, lc);
		b++;
	}while(b<='z');
	return 0;
}
