#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n],i;
    i=0;
    do{
        scanf("%d",&arr[i]);
        i++;
    }while(i<n);

    do{
    printf("%d\n", arr[n-1]);
    n--;
    }while(n>0);

}
