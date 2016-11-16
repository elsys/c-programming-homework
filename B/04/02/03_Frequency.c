#include <stdio.h>
#include <string.h>

int main()
{
	int arr[26] = {0};
	char c, str[1000];
	fgets(str, 1000, stdin);
	
	for(int i = 0;i < strlen(str);i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			arr[str[i] - 'a']++;
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			arr[str[i] - 'A']++;
		}
	}	
	for(int i = 0;i < 26;i++)
	{
		if(arr[i] > 0)
		{
			c = 'a' + i;
			printf("%c - %d\n",c,arr[i]);
		}
	}

	return 0;
}
