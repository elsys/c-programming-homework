#include <stdio.h>
#include <string.h>

int main()
{
    	char str[1000];
    	int i, l;
    	int br[26];
	fgets(str, 1000, stdin);
 	l=strlen(str);

    	for(i=0; i<26; i++) br[i] = 0;

    	for(i=0;i<l;i++)
    	{
        if(str[i]>='a'&&str[i]<='z') br[str[i] - 97]++;
        else if(str[i]>='A' && str[i]<='Z') br[str[i] - 65]++;
    	}
   	for(i=0; i<26; i++)
    	{
        	if(br[i]!=0) printf("%c - %d\n", i+97, br[i]);
    	}

 
}
