#include <stdio.h>

int main()
{

    int n, i, r = 1;
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n;)
    {
         scanf("%d", &arr[i]);
         if(arr[i]%2 != 0)
                {
                i++;
                }
    }

        for(i = 0;i < n/2; i++)
        {
                printf("%d\n",arr[i]-arr[n-r]);
                r++;
}


         if(n%2!=0)
         {
                 printf("%d", arr[n/2]);
         }


         return 0;
}
                             
