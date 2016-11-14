#include <stdio.h>
#include <string.h> 
int main() 
{
  char s[1000];
  int a = 0, count[26] = {0};   
  fgets(s,1000,stdin);
  while (s[a] != '\0')
   {

         
      if (s[a] >= 'a' && s[a] <= 'z') 
      {  
       count[s[a]-97]++;
      }
     else if(s[a]>='A' && s[a] <= 'Z')
           {
             count[s[a]-65]++;
           }
      a++;
   }
    
   for (a = 0; a < 26; a++)
   {
      
      if (count[a] != 0)
         printf("%c - %d\n",a+'a',count[a]);
   }
 
   return 0;
}
