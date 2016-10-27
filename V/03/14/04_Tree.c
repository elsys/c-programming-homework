#include<stdio.h>
int main(){
int n, i=1, a=1, b;
scanf("%d", &n);
printf("%d\n", (n - 2) * (n - 2));
while(i<=n){
for (a = 1; a <= n - i; a++){
printf(" ");
}
printf("*");
if(i>1){
if(i==n){
for(b=0;b<i*2-3;b++){
printf("*");
}
}
else if(i>1){
for(b=0;b<i*2-3;b++){
printf("#");
}
}
printf("*");
}
printf("\n");
i++;
}
return 0;
}

