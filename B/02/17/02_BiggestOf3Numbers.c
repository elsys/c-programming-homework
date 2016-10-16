#include <stdio.h>

float biggest(float a, float b, float c)
{
	if(a > b && a > c)
	{
		return a;
	}
	if(b > a && b > c)
	{
		return b;
	}
	return c;
}

int main() {
	float a, b, c;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	printf("%g\n", biggest(a, b, c));
	return 0;
}
