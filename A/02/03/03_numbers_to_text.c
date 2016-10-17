#include <stdio.h>

int main () {
	char mapping[10][6] = {
		"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" 
	};
	
	int a;
	scanf("%d", &a);
	printf("%s\n", mapping[a]);	
}
