#include<stdio.h>

int main(){
	char in;

	scanf("%c", &in);
	
	printf("%c", 'z'-(in - 'a'));
	
	return 0;
}
