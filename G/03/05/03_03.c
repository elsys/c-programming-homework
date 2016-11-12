#include <stdio.h>
int main(){
    int n,br=0,i=0,j=0;
    float m,k,sum=0;
    scanf("%d", &n);
    scanf("%f", &m);
    scanf("%f", &k);
    do{
        do{
        sum=sum+m*(100-j)/100;
        i++;
        }while(i<k);
    j=j+2;
    br=br+i+1;
    i=0;
    }while(br<=n);
    printf("%.0f", sum);
    return 0;
}
