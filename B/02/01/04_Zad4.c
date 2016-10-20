#include <stdio.h>
int main()
{
        char c;
        c=getchar();

        if(c>='a' && c<='z')
        {
             c=(97 + (122 - c));
             printf("\n%c\n",c);
        }

return 0;

}
