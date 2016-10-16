#include <stdio.h>
int main() {
    char c;
    char buk='a'+(('z'-'a')/2);
    scanf("%c", &c);
    printf("%c\n",buk-c+buk+1);
	return 0;
}
