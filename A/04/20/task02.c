#include <stdio.h>

int main()
{


    /*Property of Plamen Rizov, 2016
    Please don't copy
    Write your own code
    Took me surprisingly long to write, so don't be an ass*/
    int n, i, last, previ, a, odds[100];

    scanf("%d", &n);

    for(i = 0; i < n ;){
        scanf("%d", &a);
        if(a % 2 != 0){
            odds[i] = a;
            i += 1;
        }
    }
    i--;
    previ = i;

    for(last = previ , i = 0; i <= n/2; i ++){
        if(n%2 != 0){
            if(i == n/2)
                a = odds[n/2];
            else
                a = odds[i] - odds[last];
                last --;
        }
        else break;
        printf ("%d\n", a);
    }
    for(last = previ , i = 0; i < n/2; i ++){
        if(n%2 == 0){
            a = odds[i] - odds[last];
            last --;
        }
        else break;
        printf ("%d\n", a);
    }
}
