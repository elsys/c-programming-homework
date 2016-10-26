#include <stdio.h>
int main() {
    char c;
    char bukva='a'+(('z'-'a')/2);
    scanf("%c", &c);
    printf("%c\n",bukva-c+bukva+1);
	return 0;
}
