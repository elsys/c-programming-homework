#include <stdio.h>

int main(){
    float a, b, c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    float max=a;
    if(max<b){
        max=b;
    }
    if(max<c){
        max=c;
    }
    printf("%f", max);
    return 0;
}
