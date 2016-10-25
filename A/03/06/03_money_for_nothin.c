//plz no copypasterino because it took me
//nearly 4 hours to make this algorithm 
//and the life of at least one tree was
//taken to provide me the paper I needed. 
//go copy the task from someone else
//their solution is probably more common 
//than this
//!!!NOTE!!! If you try to understand the
//algorithm only from the code your probability
//of getting brain cancer increases with 300%
//P.S. Working with the given examples from the
//problem and a few more
#include<stdio.h>

int main(){
    int n, m, k, x, dis, total;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &k);
    x = (n - 1) / k;
    total = n * m;
    if(n%k == 0) dis = ((m * k) / 100) * ((x*x) + x);
    else if(n %k != 0) dis = ((m * k) / 100) * ((x*x) - x) + x * (m / 50) * (n % k);
    printf("%d", total - dis);
    return 0; 
}

