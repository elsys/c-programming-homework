#include <stdio.h>
int main ()
{   char c=' ', a= '*',b='#';
    int i, sp, rw, k=0,f=1,d=1,p=1;
    scanf("%d",&rw);
    for(;d<rw-2;d++)
        { p=p+2; f=f+p;}
    printf("%d\n",f);
    for(i=1; i<=rw; ++i, k=0)
    {
        for(sp=1; sp<=rw-i; ++sp)
        {
            printf("%c",c);
        }
        while(k != 2*i-1)
        { if (i==rw) {printf ("%c",a); } else
        if(k==0 || k==2*i-2) printf ("%c",a);else
            { printf("%c",b);}
		++k;
        }
        printf("\n");
    }
    return 0;
}
