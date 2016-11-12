#include <stdio.h>

int main()
{
    int n, m, c, k, i, sum=0;
    float p=0;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &k);
    c=m;
    for(i=1; i<=n; i++) {
        sum= sum+m;
            if(i%k==0){
                p=p+0.02;
                m=c-c*p;
            }
    }
    printf("%d", sum);
    return 0;
}
