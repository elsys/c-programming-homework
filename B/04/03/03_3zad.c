#include <stdio.h>
#include <string.h>

int main ()
{
	char s[1000];
	int i, k, br[26];
	char a[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	fgets(s, 1000, stdin);
	i = 0;
	
	while(i < 26)
        {
           br[i] = 0;
	   i++;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
	  for(k = 0; k < 26; k++)
       	  {
		if (s[i] == a[k] || s[i] == a[k] - 32)
		{
   		  br[k] ++;
		}
       		
	  }
	}
	i = 0;
	while(i < 26)
	{
	  if (br[i] != 0)
   	  {
  	     printf("\n%c - %d", a[i], br[i]);
  	  }
	  i++;
	} 
	return 0;
}	

