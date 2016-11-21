
#include <stdio.h>
#include <string.h>
int main(){
	int i,j=0,a,br=0;
	char str[1001];
	char sen[1001];
	fgets(str, 1001, stdin);
	for(i=0; i<=strlen(str);i++)
	{
		a=str[i];
		if((a>='a'&&a<='z')||(a>='A'&& a<='Z'))
		{
			if(a>='A'&& a<='Z') a=a+32;
		sen[j]=a;
		j++;
		}
}
	for(char ch = 'a'; ch<='z'; ch++)
		{
		for(i=0; i<=j; i++)
		{
			if(sen[i]==ch) br++;
		 }
		if(br>0){
			printf("%c - %d\n", ch, br);
		}
		br = 0;
		} 
	return 0;
}
