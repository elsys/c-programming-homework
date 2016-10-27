#include <stdio.h>

int main(){
    int n;
    int sum = 0;
    int length = 0;
    float avg;

    scanf("%d", &n);

    while(n > 0){
        sum += n % 10;

        length++;
        
        n /= 10;
    }

    avg = sum / length;

    if(avg > 7.0){
        printf("heavy\n");    
    }else{
        printf("light\n");
    }

    return 0;
}
