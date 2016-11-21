#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,choise,cik;
    signed int a[30];
    scanf("%d",&n);
    for(i=0;i<n;i++){scanf("%d",&a[i]);if(a[i]%2==0)i--;}
    if(n%2==0)choise=1;else if(n%2!=0)choise=2;
    switch(choise){
    case 1:
        cik=n/2;
        n--;
        for(i=0;i<cik;i++){printf("\n%d",a[i]-a[n-i]);}
        break;
    case 2:
        cik=n/2;
        n--;
        for(i=0;i<cik;i++)
        {
            printf("\n%d",a[i]-a[n-i]);
        }printf("\n%d",a[cik]);
        break;
    }
    return 0;
}
