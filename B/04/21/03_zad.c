#include <stdio.h>
#include <string.h>

int main ()
{
    char s[1000];
    char s1[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
 int m,i,br=0,found=0;
	 fgets (s,1000,stdin);
	 for(m=0;s1[m]!='\0';m++)
 	{
 	    for(i=0;s[i]!='\0';i++)
     		{ 
	          if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
		    { 
			  if(s[i]==s1[m]){br++;found=1;}
	                  if(s[i]+ 32==s1[m]){br++;found=1;}
          	    }
     		}
    if(found)	
	{printf("%c - %d\n",s1[m],br); found=0;br=0;}
     i=0;
 }
return 0 ;
 }
