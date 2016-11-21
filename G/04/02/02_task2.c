#include <stdio.h>
#include <stdlib.h>

int main() {
    int m,i=0,j;
    scanf("%d", &m);
    int a[m];
    while (i<m) {
        do{
            scanf("%d", &a[i]);
        }while(a[i]%2==0);
        i++;
    }
    int c=0;
    int d=m-1;
    int sum;
    j=m/2;
    while (j>0) {
        sum=a[c]-a[d];
        c++;
        d--;
        j--;
        printf("%d\n", sum);

    }
    if(m%2==1){
        printf("%d", a[m/2]);
    }
    return 0;
}
