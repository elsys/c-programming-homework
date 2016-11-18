#include <stdio.h>
#include <string.h>

void bukva_broi(char [], int []);

int main()
{
   char str[1000];
   int j, cnt[26] = {0};

   fgets(str, 1000, stdin);

   bukva_broi(str, cnt);

   for (j = 0 ; j < 26 ; j++)                                                    
        {
                if(cnt[j] != 0)
                {
                        printf("%c - %d\n", j + 'a', cnt[j]);
                }
        }

  return 0;
}



void bukva_broi(char s[], int cnt[])
{
   int j;
   for(j = 0; s[j] != '\0'; j++)
   {
        if (s[j] >= 'A' && s[j] <= 'Z')
        {
                s[j] = s[j] + 32;

        }

        if (s[j] >= 'a' && s[j] <= 'z')
         cnt[s[j]-'a']++;
   }

}

