#include <stdio.h>
#include <string.h>

int main()
{
	int z=0, i=0;
	char sentence[1000];
	fgets(sentence, 1000, stdin);
	char alhp[26] = {0}; 
	for(i=0; i<strlen(sentence); i++)
	{
		if(sentence[i] >='A' && sentence[i]<='Z')
			sentence[i] = sentence[i] + 32;
			
	}
	
	while(z<26)
	{
		for(i=0;i<strlen(sentence);i++)
		{

			if(sentence[i]=='a' + z) alhp[z]++;
		}
		z++;
	}
	i = 0;
	z = 0;
	
	while(i<26)
	{
		if(alhp[i])
		{
			printf("%c - %d\n", 'a'+i,alhp[i]);
		}
		i++;
	}
		

	
	
	return 0;
}
