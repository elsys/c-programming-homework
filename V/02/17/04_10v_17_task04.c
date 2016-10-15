#include <stdio.h>

int main() {
	char c;
	printf("\n Input symbol > ");
	int n;
	scanf("%c",&c);
	n = c;
	//printf("%d \n",n);
	int m;
	char print;
	/*
	if ( n = 97 ) {
		printf("\nz");
	}
	if ( n = 122 ){
		printf("\na");
	}
	*/
	if ( n >= 97 && n <= 109){
		m = 109 - n;
		//printf("%d",m);
		print = 110 + m;
		printf("%c",print);
	}
	if ( n > 109 && n <= 122){
		m = 123 - n;
		//printf("\n %d",m);
		print = 96 + m;
		printf("%c",print);
	}
	 
		
return 0;
}

	
