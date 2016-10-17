#include <stdio.h>

int main(){

	char c, res;
	scanf("%c", &c);

	if(c<110){
		c = 110 - c;
		res = 109 + c;
	}else{
		c = 123 - c;
		res = 96 + c;
	}

	printf("%c", res);

	return 0;
}
