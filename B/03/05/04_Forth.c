#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i=0,y=0,help=0,x=0,help2=0,zvez=0,reds=n-2,dies=1,broi=0;
    do{
        broi=broi+dies;
        i++;
        dies=dies+2;
    }while(i<reds);
    printf("%d\n",broi);
    for(i=1;i<=n;i++)
    {
        x=0;
        for(;y<n-1;y++)
        {
            printf(" ");
        }
        if(i==1){
            printf("*\n");
        }
        if(i==2){
            printf("*");
            printf("#");
            printf("*\n");
            help++;
            y=help;
            continue;
        }
        if(i==n){
            do{
                printf("*");
                zvez++;
            }while(zvez<n+(n-1));
            break;
        }

        if(i>2){
            printf("*");
        for(;x<i+help2;x++)
        {
            printf("#");

        }
        printf("*\n");
        help2++;
        }
      help++;
      y=help;
    }
    return 0;
}
