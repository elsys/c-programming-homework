#include <stdio.h>
#include <stdlib.h>

int main()
{
    int foot,count=1,i=0,brsp,brhash=1,control=0,control1=0,morest,safe=0,dodat,doonat,n=0;
    do{scanf("%d",&foot);}while(foot<3);
    dodat=foot-2;
    doonat=foot-3;
    for(;dodat!=0;dodat--){i=i+n*2+1;n++;}
    printf("%d\n",i);
    i=0;
    dodat=foot-2;
    doonat=foot-3;
    do{
        for(brsp=0;brsp!=foot-count;brsp++)
        {
            printf(" ");
        }
        count++;
        if(control==0)printf("*");
        if(control>0)
        {
            while(control1<dodat)
            {
                printf("*");
                safe=brhash;
                do{
                   printf("#");
                   brhash--;
                }while(brhash!=0);
                printf("*");
                brhash=safe+2;
                control1++;
                break;
            }
        }else control++;
        i++;
        if(i==foot)
        {
            morest=5+doonat*2;
            for(;morest!=0;morest--)printf("*");
        }
        printf("\n");
    }while(i!=foot);
    return 0;
}

