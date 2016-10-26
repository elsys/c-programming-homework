#include<stdio.h>
int main(){
int x, d=0;
float l=0;
scanf("%d", &x);
while(x!=0){
l=l+(x%10);
x=x/10;
d++;
}
l=l/d;
if(l>7)printf("heavy");else printf("light");
return 0;
}
