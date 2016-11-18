#include <stdio.h>
int const maxChars = 1000;

struct pair
{
	char letter;
	int count;
};

int main()
{
	char userInput[maxChars];

	fgets(userInput, maxChars, stdin);	

	char alphabet [26] = {'a', 'b', 'c', 'd', 'e',
						  'f', 'g', 'h', 'i', 'j',
						  'k', 'l', 'm', 'n', 'o',
						  'p', 'q', 'r', 's', 't',
 						  'u', 'v', 'w', 'x', 'y', 'z'};
	struct pair heatMap[26];

	for(int i = 0; i < 26; i++)
	{
		heatMap[i].count = 0;
		for(int j = 0; userInput[j] != '\0'; j++)
		{
			//making all lovercase
			if(userInput[j] >= 'A' && userInput[j] <= 'Z')
			{
				userInput[j] += 32;
			}
			if(alphabet[i] == userInput[j])
			{
				heatMap[i].letter = alphabet[i];
				heatMap[i].count++;
			}
		}
		if(heatMap[i].count != 0)
		{
			printf("%c - %d\n", heatMap[i].letter, heatMap[i].count);
		}		
	}	
	return 0;
}	

