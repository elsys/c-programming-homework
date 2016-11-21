#include <stdio.h>
#include <string.h>
int main()
{
    	char string[1000];
    	int a,len;
    	int arr[26];
	fgets(string,1000,stdin);
 	len=strlen(string);
    	for(a=0;a<26;a++)
		 arr[a]=0;
    	for(a=0;a<len;a++)
    	{
        	if(string[a]>='a'&&string[a]<='z')
		arr[string[a]-97]++;
        else 
		if(string[a]>='A'&&string[a]<='Z')
		arr[string[a]-65]++;
    	}
   	for(a=0;a<26;a++)
    	{
        	if(arr[a]!=0)
			printf("%c - %d\n",a+97,arr[a]);
    	}

 
}
