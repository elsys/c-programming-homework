#include <stdio.h>


int main()
{   int numb,i;
    float sum;
    scanf("%d", &numb);
    sum=0;
    i=0;
    do{
        i++;
        sum=sum+numb%10;
        numb=numb/10;


    }while(numb>0);

    if(sum/i>7){
        printf("heavy");

    }
    else{
        printf("light");
    }

    return 0;
}
