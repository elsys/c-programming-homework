#include<stdio.h>

int powMy(int n,int p);

int main()
{
	int number;
	int pow2,pow3;
	scanf("%d",&number);
	pow2 = powMy(number, 2);
	pow3 = powMy(number, 3);
	printf("%d\n%d",pow2,pow3);
	return 0;
} 

int powMy(int number,int power)
{
	int res = 1;
	for(int i = 0; i<power; i++)
	{
		res*=number;
	}
	return res;
}
