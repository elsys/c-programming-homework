#include <stdio.h>
int main ()
{
        float arr[1000],a,vsicko=0;
        int i,j,b;
        i=0,b=0;
	
        while(scanf("%f",&a)!=EOF){
                j=0;
                for(i=0;i<64;i++){
                        if(arr[i]==a)j=1;}

                if(j==0){
                        arr[b]=a;
                        b++;}
                i++;
        }

        printf("%d\n",b);

        for(i=0;i<b;i++){
                do{
                        arr[i] = arr[i]-b;
                }while(arr[i]>=0);

                vsicko=vsicko+(arr[i]+b);
        }

        printf("%.3f",vsicko);

return 0;
}

