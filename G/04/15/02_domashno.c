#include <stdio.h>


    int main() {
        int n,i,k;
        scanf("%d", &n);
        i=0;
        int masiv[n];
        while(i<n)
        {
            scanf("%d", &masiv[i]);
            if(masiv[i]%2!=0)
            i++;
        }
        for(i=0;i<n/2;i++)
        {
            k=masiv[i]-masiv[n-1];
            printf("\n%d", k);
        }
        if(n%2!=0)
        {
            printf("\n%d", masiv[n/2]);
        }
        return 0;
    }
