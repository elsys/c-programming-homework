#include <stdio.h>

int main(){
    char a;
    scanf ("%c", &a);
    char b='z'-(a - 'a');
    printf("%c", b);
    return 0;
}
