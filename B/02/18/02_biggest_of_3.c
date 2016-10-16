#include <stdio.h>
int main ()
{
        float a,b,c;
        printf ("Input first number:");
        scanf ("%f",&a);
        printf ("Input second number:");
        scanf ("%f",&b);
        printf ("Input third number:");
        scanf ("%f",&c);
        if (a>b)
        {
                if (a>c) printf ("\nMax=%.1f\n",a);
                else printf ("\nMax=%.1f\n",c);
        }
        else
        {
                if (b>c) printf ("\nMax=%.1f\n",b);
                else printf ("\nMax=%.1f",c);
        }


        return 0;
}
