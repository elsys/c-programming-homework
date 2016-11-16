#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	
    char sen[1000];
    int i, j;
    
    fgets(sen,1000,stdin);

    for(i = 0; sen[i] != '\0'; ++i)
    {
        while (!( (sen[i] >= 'a' && sen[i] <= 'z') || (sen[i] >= 'A' && sen[i] <= 'Z') || sen[i] == '\0') )
        {
            for(j = i; sen[j] != '\0'; ++j)
            {
                sen[j] = sen[j+1];
            }
            sen[j] = '\0';
        }
    }
   // puts(sen);
	
	
  // char ch, out[1000];
  // int no[26] = {0}, n, c, t, x;
	int n;
   n = strlen(sen); 
  /* for (c = 0; c < n; c++)
   {
      ch = sen[c] - 'a';
      no[ch]++;
   }

   t = 0;
   for (ch = 'a'; ch <= 'z'; ch++)
   {
      x = ch - 'a';
 
      for (c = 0; c < no[x]; c++)
      {
         out[t] = ch;
         t++;
      }
   }
   out[t] = '\0';
   printf("%s\n", out);
*/
int times=0;
for(j=0;j<26;j++)
{
	times = 0;
	for(i=0;i<n;i++)
	{
	/*	if(out[i] == out[j-1])break;
		if(out[i] == out[i]) times++;
		if(out[i]!=out[i])break;
	*/
		if(sen[i] == 'a' + j)times++;
		if(sen[i] == 'A' + j)times++;
	
	}
	
	if(times!=0)  printf("%c - %d\n", 'a' + j, times);
}


 return 0;
}
