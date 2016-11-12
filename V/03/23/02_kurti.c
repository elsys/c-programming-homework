#include<stdio.h>
int main()
{
 int n,a,i,sum=0;
 float avg=0.0;
 scanf("%d",&n);
 for(i=0;n>0;i++)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    avg=(float)sum/i;
    if(avg>7)
        {
            printf("\nheavy");
        }
    else
    {
        printf("\nlight");
    }
    return 0;
}
