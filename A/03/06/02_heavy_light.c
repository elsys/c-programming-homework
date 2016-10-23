#include<stdio.h>

int main(){
    int in, digits;
    float avg;
    scanf("%d", &in);
    for(digits = 0 ; in != 0 ; digits++, in/=10) avg += in%10;
    avg /= digits;
    if(avg > 7) printf("heavy");
    else printf("light");
    return 0;
}

