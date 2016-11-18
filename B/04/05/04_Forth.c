#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   int i,br,chek,k;
    float n, sum;
    i=0;
    br=0;
    chek=0;
    k=0;
    float arr[64]={ 0 };
    while(scanf("%f", &n)!= EOF){
            do{
               if(n==arr[i]){
                chek=1;
               }
            i++;
        }while(i<64);
        if(chek==0){
                arr[k]=n;
                br++;
                sum=sum+fmod(n,5);
        }
        k++;
        i=0;
        chek=0;
    }

    printf("%d\n", br);
    printf("%.3f", sum);
   return 0;
}
