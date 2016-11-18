#include<stdio.h>
#include<string.h>
int main()
{
	int i,repeat,l;
	char text[1000],long_letter,small_letter;
	fgets(text,sizeof text,stdin);
	l=strlen(text);
	for(long_letter='A',small_letter='a';long_letter<='Z';long_letter++,small_letter++)
	{
		repeat=0;
		for(i=0;i<l;i++)
		{
			if(text[i]==long_letter || text[i]==small_letter) repeat++;
		}
		if(repeat!=0) printf("%c - %d \n",small_letter,repeat);
	}
}
