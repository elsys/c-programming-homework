#include <stdio.h>

int main()
{
	char digits[][6] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	int n;
	scanf("%d", &n);
	printf("%s\n", digits[n]);
}
