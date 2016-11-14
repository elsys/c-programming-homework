#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	char input[1000];
	fgets(input,1000,stdin);

	int freq[26];
	for(i=0;i<26;i++)
	{
		freq[i]=0;
	}

	int length=strlen(input);
	for(i=0;i<length;i++)
	{
		if(input[i]>='a' && input[i]<='z')
		{
			freq[(input[i]-'a')]++;
		}
		if(input[i]>='A' && input[i]<='Z')
		{
			freq[(input[i]-'A')]++;
		}
	}

	for(i=0;i<26;i++)
	{
		if(freq[i]>0)
		{
			printf("%c - %d\n",'a'+i,freq[i]);
		}
	}
}
