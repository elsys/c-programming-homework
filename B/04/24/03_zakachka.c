#include <stdio.h>
#include <string.h>
 
int main()
{
   char s[1000];
   int j, alph[26] = {0}, k; 
   fgets(s, 1000, stdin);
   for(j = 0; j<strlen(s); j++)
   {
      if (s[j] >= 'a' && s[j] <= 'z') 
      {
	   alph[s[j]-'a']++;
      }
      else if(s[j] >= 'A' && s[j] <= 'Z')
	{
	alph[s[j] - 'A']++;
	} 
}
   for (k = 0; k < 26; k++)
   {
      if (alph[k] != 0){
         printf("%c - %d\n",(k + 'a'),alph[k]); 
   }
   }
return 0;
}
