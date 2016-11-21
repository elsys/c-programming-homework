#include <stdio.h>

int main()
{
	char sentence[1001];
	int charCount[26];
    int i;
	for (i = 0; i < 26; i++)
	{
		charCount[i] = 0;
	}

	fgets(sentence, 1001, stdin);

    i=0;
	while (sentence[i] != '\0')
	{
		if ((sentence[i] >= 'a') && (sentence[i] <= 'z'))
		{
			charCount[sentence[i] - 'a']++;
		}
		else
		{
			if ((sentence[i] >= 'A') && (sentence[i] <= 'Z'))
			{
				charCount[sentence[i] - 'A']++;
			}
		}
		i++;
	}


	for (i = 0; i < 26; i++)
	{
		if (charCount[i] != 0)
		{
			printf("%c - %d\n", i + 'a', charCount[i]);
		}
	}

	return 0;
}
