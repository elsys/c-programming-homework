#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,m,sum=0,br=0,avr;
   do{
        scanf("%d",&m);
        do{
            c=m%10;
            sum=sum+c;
            m=m/10;
            br++;
        }while(m>0);
        avr=sum/br;
        if(avr>7)printf("heavy");
        else printf("light");
   }while(c<1||c>9999);

}
