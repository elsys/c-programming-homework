#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, r, broi=0;
    float sum=0, avg=0;
    scanf("%d",&n);
    while(n){
        r=n%10;
        n=n/10;
        broi=broi+1;
        sum=sum+r;}
    avg=sum/broi;
    if(avg>7)printf("heavy \n");
    else printf("light \n");
}
