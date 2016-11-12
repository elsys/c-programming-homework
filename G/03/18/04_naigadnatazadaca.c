#include<stdio.h>
int main(){
int n,k,tag,i,m;
m=1;
tag=0;
scanf("%d",&n);
k= n-1;
printf("%d\n",(n-2)*(n-2));
while(m!=n){
     if(m==1){
     for(i=0; i<k; i++)printf(" ");
     printf("*");
     tag--;
        }
     else{
     for(i=0; i<k; i++)printf(" ");
     printf("*");
     for(i=0; i<tag; i++)printf("#");
     printf("*");
     }
     tag=tag+2;    
     m++;
     k--;
     printf("\n");
    }
for(i=0; i<m+n-1; i++)printf("*");
}
