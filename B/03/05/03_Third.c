#include <stdio.h>
int main()
{
   int br,cena,BroiZaOtstupka,kupeni=0;
    float otstupkanow=0,krainasum=0;
   scanf("%d", &br);
   scanf("%d", &cena);
   scanf("%d", &BroiZaOtstupka);
   do
   {
       kupeni=kupeni+BroiZaOtstupka;
       if(kupeni>br)
        {
         BroiZaOtstupka=kupeni-br;
        }
       krainasum=krainasum+BroiZaOtstupka*(cena-(otstupkanow*cena));
        otstupkanow=otstupkanow+0.02;
   }while(kupeni<br);
    printf("%.0f",krainasum);
    return 0;
}

