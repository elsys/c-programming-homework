#include <stdio.h>

int main()
{
    int n, i, c, result, avg;
    result = 0;
    i=0;
    scanf("%d", &n);
    do{
        c= n%10;
        result= result + c;
        n=n/10;
        i++;
    }while(n%10!=0);
    avg = result/i;
    if(avg>7) printf("heavy");
    else printf("light");
    return 0;
}
