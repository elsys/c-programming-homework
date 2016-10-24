#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float sum,count;
    scanf("%d",&a);
    int clone=a;
    int i=0;
    for(;i<a;i++){
        b=clone % 10;
        sum +=b;
        a/=10;
        count+=1;
    }
    sum = sum/count;
    if(sum>=7.00) printf("heavy\n");
    else printf("light\n");
}
