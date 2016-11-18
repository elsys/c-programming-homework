#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,m,sum,k;
    i=0;
    sum=0;
    scanf("%d",&n);
    k=n-1;
    int arr[n];
    do{
        scanf("%d",&m );
        if(m%2!=0){
            arr[i]=m;
            i++;
        }

    }while(i<n);
    i=0;
    if(n%2==0){
    do{
        sum=arr[i]-arr[n-1];
        n--;
        i++;
        printf("%d\n", sum);
    }while(n>i);
    }
    else {
        do{

        sum=arr[i]-arr[k];
        k--;
        i++;
        printf("%d\n", sum);
        if(k==i){
            printf("%d", arr[i]);
            break;
        }
        }while(k>=n);
    }

}

