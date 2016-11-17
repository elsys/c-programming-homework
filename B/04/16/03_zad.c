#include <stdio.h>
#include <string.h>

int main ()
{
	char sentence[1000];
	int i, k;
	fgets(sentence, 1000, stdin);
	char abv[27] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
	int count[27];
	for (i = 0; i < 26; i++)
        {
            count[i] = 0;
	}
	for (i = 0; sentence[i] != '\0'; i++)
	{
		for (k = 0; k < 26; k++)
		{
			if (sentence[i] == abv[k] || sentence[i] == abv[k] - 32)
			{
				count[k] ++;
			}
		}
	}

	for (i = 0; i < 26; i++)
	{
		if (count[i] != 0)
		{ printf("\n%c - %d", abv[i], count[i]);}
		
	} 
}	
