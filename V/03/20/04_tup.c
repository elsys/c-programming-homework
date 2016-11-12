#include<stdio.h>
int main(){
int t, r=0, u, m, p=1, d=0;
scanf("%d", &t);
m=t-1;
if(t>2){
u=1;
d=1;
for(r=1;r<t-2;r++){
u+=2;
d+=u;
}
}
printf("%d\n", d);
for(r=0;r<t;r++){
for(u=0;u<m;u++){
printf(" ");
}
for(u=0;u<p;u++){
if(u==0||u==p-1||r==t-1){
printf("*");
}else if(r!=t-1){
printf("#");
}
}
m--;
p+=2;
if(r+1<t)printf("\n");
}
return 0;
}
