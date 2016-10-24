#include<stdio.h>
int main(){
int n, i;
float  sum=0, avg;
scanf("%d", &n);
while(n>0){
sum=sum+n%10;
n=n/10;
i++;
}
avg=sum/i;
if(avg>=7){printf("heavy");
}else{printf("light");}
return 0;
}
