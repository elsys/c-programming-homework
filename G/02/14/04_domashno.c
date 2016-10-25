#include <stdio.h>
int main() {
    char c;
    char sim='a'+(('z'-'a')/2);
    scanf("%c", &c);
    printf("%c\n",sim-c+sim+1);
	return 0;
}
