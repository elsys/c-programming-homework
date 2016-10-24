#include <stdio.h>

int main(){
    int a, b;
    float avg, sum=0, i=-1;
    
    do{
        scanf("%d", &a);
    }while(a<1 || a>9999);
    
    while(b>0){
        b=a%10;
        sum+=b;
        a=a/10;
        i++;
    }
    
    avg=sum/i;
    if(avg>7){
        printf("heavy");
    }else{
        printf("light");
    }
    
    return 0;
}
