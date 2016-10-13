#include <stdio.h>
int main()
{
	char c,opp;
	int n,op,k;
	do{
		printf("Insert symbol:\n");
		scanf("%c", &c);
		n=c;
	  }
	while(n<=97 && n>=122);
        k=  n - 97;
        op = 122 - k;
        opp = op;
        printf("%c", opp);
return 0;   
 
             


}
