#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, space, rows, hashtag=0,counttop=0,base,counthash;
    scanf("%d",&rows);
    base = (1 + (rows - 1) * 2)-4;
    counttop= rows-2;
    //
    if (counttop%2==0)
        { counthash = (base+1)*(counttop/2);}
    else
        {counthash= (base-1)*((counttop-1)/2)+base;}
    printf("%d\n",counthash);
    //
    for(i = 1; i < rows; i++) {
        for(space = 1; space <= rows-i; space++) {
           printf(" ");
        }
        while(hashtag != (2*i - 1)) {
            if(hashtag==0 || hashtag==2*i-2)
                printf("*");
            else
                printf("#");
            hashtag++;;
        }
        hashtag=0;
        printf("\n");
    }
    for(i=0; i<2*rows-1; i++){
     printf("*");
    }

    return 0;
}
