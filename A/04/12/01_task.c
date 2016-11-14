#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,k=0;
    //gets count
    scanf("%d",&n);
    int help=n;
    int a[1000];
    //gets array elements
    for(i=0;i<n;i++){
        scanf("%d",&k);
        a[i+1]=k;
    }
    a[n+1]='\0';

    //prints array
    do{
        printf("%d\n",a[help]);
        help--;
    }while(help>0);

    return 0;
}

