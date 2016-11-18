#include<stdio.h>
#include<math.h>
int main(){
    int br = 0, is = 0, i;
    float arr[64], tmp, sum = 0;
    for(i=0; i<64; i++)arr[i] = 0;
    while(scanf("%f", &tmp) != EOF){
        for(i=0; i<br; i++){
            if(tmp == arr[i]){
                is = 1;
                break;
            }
        }
        if(!is){
            arr[br] = tmp;
            br++;
        }
        else is = 0;
    }
    for(i=0; i<br; i++)sum += fmodf(arr[i], br);
    printf("%d\n", br);
    printf("%.3f", sum);
}
