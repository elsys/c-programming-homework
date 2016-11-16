#include<stdio.h>
int main(){
    int n,sum,avg;
    avg=0;
    scanf("%d", &n);
    for(sum=0;n!=0;n=n/10,avg++)sum=sum+n%10;
    sum=sum/avg;
    if(sum>7)
        printf("heavy");
    else
        printf("light");
    return 0;
}
