#include <stdio.h>
#include <string.h>

int main()
{

	char snts[1000];
	int alph[26]={0},i=0;
	
	fgets(snts,1000,stdin);

	while(snts[i]!='\0') 
	{
	        if(snts[i]>='A'&&snts[i]<='Z') 
		{
        		snts[i]=snts[i]+32;
        	}

        	i++;
	}

	i=0;

	while(snts[i]!='\0')
	{
	        if(snts[i]>='a'&&snts[i]<='z')
		{
	            alph[snts[i]-'a']++;
	        }
	
        i++;
	}

	for(i=0;i<26;i++)
	{
        if(alph[i]!=0)
	{
            printf("%c - %d\n",i+'a',alph[i]);
        }
    }
    return 0;
}
