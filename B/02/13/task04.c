#include<stdio.h>
int main()
{
char letter;
letter = getchar();

	if(letter>='a'||letter<='z')
		{	 
		
			if(letter<110){
			letter=letter  + (25 - 2*(letter - 97));
			printf("%c\n",letter);
			}else{
			letter=letter + (25 - 2*(letter - 97));
			printf("%c\n",letter);
			}
	
		}else{
		printf("\nTry again! OR Press esc! ");


	}	
return 0;
}
