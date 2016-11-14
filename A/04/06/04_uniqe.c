#include<stdio.h>

float get_remainder(float a, int b);

int main(){
    float numbs[64], temp, sum = 0;
    int count = 0, n6to = 0;
    for(int i = 0 ; i < 64 ; i ++)
        numbs[i] = 0;

    while(scanf("%f", &temp)!=EOF){ 
        for(int i = 0 ; i < count ; i ++){
            if(numbs[i] == temp){
                n6to = 1;
                break;
            }
        }
        if(n6to == 0){
            numbs[count] = temp; 
            count ++;
        }else{
            n6to = 0;
        }
    }

    for(int i = 0 ; i < count ; i++){
        sum += get_remainder(numbs[i], count); 
    }
    printf("%d\n", count);
    printf("%.3f\n", sum);
    return 0;
}
float get_remainder(float a, int b){
    int dev = (int)a;
    float rem = a - dev;
    return (dev%b) + rem;
}
