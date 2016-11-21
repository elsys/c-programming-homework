#include<stdio.h>
#include<string.h> 
int main()
{ 
int s,i,k=0,n=0;
char string1[1000];
char string2[1000];
fgets(string1, 1000, stdin);
 for(i=0; i<=strlen(string1); i++)
{ 	
	s = string1[i];
 	if((s >='A' && s<='Z') || (s >='a' && s <='z'))
	{
		if(s >='A' && s <='Z')
			s=s+32;
		string2[n]=s;
		n++;
	}
}
for(char b ='a';b<='z';b++)
{
	for(i=0;i<n;i++)
	{
		if(string2[i]==b) k++;
	} 
	if(k>0) 
		printf("%c - %d\n", b,k);
	k=0;
}
 
return 0;
 }


