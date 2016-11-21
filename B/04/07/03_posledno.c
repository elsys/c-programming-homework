#include <stdio.h>
#include <string.h>

int main()
{

   int c , count[26] = {0};
   char string[100];
   c=0;
   fgets(string, 100, stdin);

   while (string[c] != '\0')
   {

    if(string[c] >= 'A' && string[c] <= 'Z'){
         count[string[c]-'A']++; }

     if (string[c] >= 'a' && string[c] <= 'z'){
         count[string[c]-'a']++;}

          c++;


   }

  for (c=0; c < 26; c++)
   {

     if (count[c] != 0)
         printf("%c - %d\n",c+'a',count[c]);
     
    
}
   
   return 0;
}



