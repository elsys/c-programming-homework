#include <stdio.h>

int main() {
    int a, i=0, s=0, h=0, k=0, sumc=0, sum=0, b=1 ;
    scanf("%d", &a);
    
    while(sumc<a-2){
        sum=sum+b;
        b=b+2;
        sumc++;
    }
    printf("%d\n", sum);
    
    while(i<a){
        while(s<a-1){
            printf(" ");
            s++;
        }
        
        printf("*");
        
        while(h<k){
            if(i==a-1){
                printf("*");
            }else{
                printf("#");
            }
            h++;
        }
        
        if(i>0){
            printf("*");
        }
        
        printf("\n");
        
        if(k==0){
            k++;
        }else{
            k=k+2;
        }
        i++;
        s=i;
        h=0;
        
    }

    return 0;
}
