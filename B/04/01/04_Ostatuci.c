#include <stdio.h>

int main()
{

         double arr[64] = {0}, n, result;
         int cnt, i, j, check;
         result = 0;
         i = 0;
         while(scanf("%lf", &n) != EOF){

           check = 1;
           arr[i] = n;

           j = 0;

           while(j < i)
           {
                if(arr[j] == arr[i])
                {
                        check = 0;
                } j++;

           }

           if(check != 0)
           {
             i++;
           }
         }

         for(cnt = 0; cnt < i; cnt++)
         {

                 if(arr[cnt] >= i)
                 {
                        while(arr[cnt] >= i)
                        {
                                 arr[cnt] -= i;
                        }
                 }


             result += arr[cnt];

         }

         printf("%d", i);
         printf("\n%.3lf\n", result);
         return 0;
 }











