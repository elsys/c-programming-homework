#include <stdio.h>
int main()
{
	char c,opp;
	int n,op,k;
		printf("Insert symbol:\n");
		scanf("%c", &c);
		n=c;
	
        k=  n - 97;
        op = 122 - k;
        opp = op;
        printf("%c\n", opp);
return 0;
}
