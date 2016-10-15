#include <stdio.h>
void main() {
    char c;
    char buk='a'+(('z'-'a')/2);
    scanf("%c", &c);
    printf("%c\n",buk-c+buk+1);
}
