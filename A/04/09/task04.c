#include <stdio.h>

int main(){
    int  i=0;
            float sum=0;
    float a[64];
    while (scanf("%f", &a[i])!= EOF){
        int c=1;
        for(int j=0; j<i; j++){
            if(a[j]==a[i]){
                c=0;
            }
        }
        
        if(c){
            i++;
        }
    }
    for(int k=0; k<i; k++){
        float n=a[k];
        if(n>=i){
            do{
                n=n-i;
            }while(n>=i);
        }
        sum+=n;
    }
    printf("%d", i);
    printf("\n%.3f", sum);
}
