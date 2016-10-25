#include <stdio.h>

int main () {	
	char letter;
	scanf("%c", &letter);

	char out = 'z' - letter + 'a';
	printf("%c\n", out);
}
