#include <stdio.h>

int main()
{
char letter;	
do{
	letter = getchar();
	if(letter >= 'a' && letter <= 'z'){ 
	letter = letter + (25-2*(letter-97)); 
	printf("%c\n", letter);
	}else{ break;}
}while(letter=='.');

return 0;
}

