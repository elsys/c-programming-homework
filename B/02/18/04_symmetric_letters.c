#include <stdio.h>
int main ()
{
        char c;

	printf ("Input a letter: ");
        scanf ("%c",&c);
        c='z'-(c-'a');
        printf ("\nThe symmetric letter: %c\n",c);
        return 0;
}

