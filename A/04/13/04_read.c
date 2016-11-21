#include <stdio.h>
#include <math.h>
int main(){
        float num,a,sum;
        float arr[64];
        int i=0,f=0,j;
        while(scanf("%f",&num)!=EOF){
                f=0;
                for(j=0;j<sizeof(arr);j++){
                        if(arr[j]==num)
                                f=1;}
                if(f==0){
                        arr[i]=num;
                        i++;}
                        }
        for(j=0;j<i;j++)
        {
                a=fmod(arr[j],i);
                sum = sum+a;}
        printf("%d\n",i);
        printf("%.3f",sum);

return 0;
}
