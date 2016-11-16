#include<stdio.h>
int main(){
    int n, space, hashtag=0, i, current=1;
    scanf("%d", &n);
    space = n-1;
    printf("%d\n", (n-2)*(n-2));
    while(current!=n){
        if(current==1){
            for(i=0; i<space; i++)printf(" ");
            printf("*");
            hashtag--;
        }
        else{
            for(i=0; i<space; i++)printf(" ");
            printf("*");
            for(i=0; i<hashtag; i++)printf("#");
            printf("*");
        }
        space--;
        hashtag += 2;
        current++;
        printf("\n");
    }
    for(i=0; i<current+n-1; i++)printf("*");
}
