#include <stdio.h>


int main()
{
    int n,i;
    float s;
    scanf("%d", &n);
    s=0;
    i=0;
    do{
        i++;
        s=s+n%10;
        n = n/10;


    }while(n>0);

    if(s/i>7){
        printf("heavy");

    }
    else{
        printf("light");
    }

    return 0;
}
