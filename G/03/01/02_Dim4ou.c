#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chislo,a,sum=0,i,br=0,avr;
    do{
    scanf("%d",&chislo);
    }while(chislo<1 || chislo>9999);
    for(i=0;i<chislo;i++){
        a=chislo%10;
        sum=sum+a;
        chislo=chislo/10;
        br++;
    }
    avr=sum/br;

    if(avr>7){
        printf("heavy\n");
    }
    else{
        printf("light\n");
    }
    return 0;

}

