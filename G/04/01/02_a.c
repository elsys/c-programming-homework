#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i,n,Num,Odd[50]= {0},brOdd=0,Middle;

    scanf("%d",&n);
    do{
       scanf("%d",&Num);
        if(Num%2!=0){
            Odd[brOdd]=Num;
            brOdd++;
        }
    }while(brOdd<n);

    Middle = n / 2;
    for(i=0;i<Middle;i++){
        printf("\n%d",Odd[i]-Odd[n-i-1]);
    }
    if(n%2!=0){
        printf("\n%d\n",Odd[Middle]);
    }
    }
