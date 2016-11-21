#include <stdio.h>
#include <stdlib.h>

int main()
{
   char string[100];
   int c=0,bukvi[26]={0};

  fgets(string,100,stdin);

   while(string[c] != '\0')
   {
      if(string[c]>='a'&&string[c]<='z')
         bukvi[string[c]-'a']++;
      else if(string[c]>='A'&&string[c]<='Z')
         bukvi[string[c]-'A']++;c=c+1;
   }
   for(c=0;c<26;c++)
   {
      if (bukvi[c]!=0)
         printf("%c - %d\n",c+'a',bukvi[c]);
   }
}
