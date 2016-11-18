#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[50],opparray[50],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        opparray[i]=array[n-i-1];
    }
    for(i=0;i<n;i++){
        printf("%d\n",opparray[i]);
    }

}
