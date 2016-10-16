#include <stdio.h>

int main() {
	char c;
	int n;
	scanf("%c",&c);
	n = c;
	int m;
	char print;
	if ( n >= 97 && n <= 109){
		m = 109 - n;
		print = 110 + m;
		printf("%c",print);
	}
	if ( n > 109 && n <= 122){
		m = 123 - n;
		print = 96 + m;
		printf("%c",print);
	}
	 
		
return 0;
}

	
