#include<stdio.h>
int main(){
    int a, sum=0, n, count=0;
    scanf("%d", &a);
    while(a<1 || a>9999)scanf("%d", &a);
    while(a!=0){
        n = a%10;
        sum += n;
        count++;
        a /= 10;
    }
    if(sum/count > 7)printf("heavy");
    else if(sum/count <= 7)printf("light");
    return 0;
}
