#include <stdio.h>

int main()
{
    int n,cfr,sum=0,i=0;
    float avg;
    do{
       scanf("%d",&n);
    }while (n<1 || n>9999);
    while(n>0){
        cfr=n%10;
        sum=sum+cfr;
        n=n/10;
        i++;
        avg=sum/i;
    }
    if(avg<7)printf("light");
    if(avg>7)printf("heavy");
    return 0;
}
