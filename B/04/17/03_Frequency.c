#include <stdio.h>

int main()
{
	char input[1001];
	fgets (input, 1001, stdin);

	int frequencies[26] = {0};
	for(int i = 0; input[i]; i++)
	{
		if(input[i] >= 'A' && input[i] <= 'Z')
		{
			frequencies[input[i] - 'A']++;
	        }
		if(input[i] >= 'a' && input[i] <= 'z')
		{
			frequencies[input[i] - 'a']++;
		}
	}

	for(int i = 0; i < 26; i++)
	{
		if(frequencies[i] > 0)
		{
			printf("%c - %d\n", 'a' + i, frequencies[i]);	
		}	
	}

	return 0;
}
