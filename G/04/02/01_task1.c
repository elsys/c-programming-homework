#include <stdio.h>
#include <stdlib.h>

int main()
{
    int q,m=0;
    scanf("%d",&q);
    int help=q;
    int o[555];
    int i=0;
    while (i<q){
        scanf("%d",&m);
        o[i+1]=m;
        i++;
    }
    o[q+1]='\0';
    do{
        printf("%d\n",o[help]);
        help--;
    }while(help>0);

    return 0;
}
