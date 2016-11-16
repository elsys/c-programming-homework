#include<stdio.h>

int main()
{
    int n,m,m1,k,i=0,sum=0;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&k);
    do{
            m1=(2*m)/100;
            sum=sum+m-((i/k)*m1);
            i++;
    }while(i<n);
    printf("%d",sum);
    return 0;
}
