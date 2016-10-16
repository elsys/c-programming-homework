#include<stdio.h>

int main()
{
	char ch,opl;
	do{
	scanf("%ch", &ch);
	}while(ch<='a' && ch>='z');
	opl='z'-(ch-'a');
	printf("Opposite is: %c\n", opl);	
return 0;
}
