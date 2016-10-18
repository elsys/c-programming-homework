#include <stdio.h>
#include <stdlib.h>

int main(){
	char word;

	scanf("%c", &word);
	
	printf("%c", 'z'-(word - 'a'));
	
	return 0;
}
