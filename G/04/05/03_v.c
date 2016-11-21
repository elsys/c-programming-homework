#include <stdio.h>
#include <string.h>
int main() 
{
  char string[1000];
  int  bukvi[26]={0};
  int i=0;   
  fgets(string,1000,stdin);
  do{   
       if (string[i] >='a' && string[i]<='z') { bukvi[string[i]-97]++; }
       if (string[i] >='A' && string[i]<='Z') { bukvi[string[i]-65]++; }
       i++;
     }while(string[i] !='\0');
  for (i=0;i<26;i++) { if (bukvi[i] != 0) { printf("%c - %d\n",i+'a',bukvi[i]); }
		      }
return 0; }
