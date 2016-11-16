#include <stdio.h>
 int main() {
    int n, m, k;
    int sum = 0;
    int count;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&k);
    for(count = 0; count < n; count++){
        sum =sum+m-(count / k * (2 * m / 100));}
    printf("%d\n",sum);
    return 0;
}
