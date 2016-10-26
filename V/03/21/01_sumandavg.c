#include <stdio.h>
int main(){
int i,s=0,x;
float a,n;
scanf("%f",&n);
for(i=0;i<n;i++){
scanf("%d",&x);
s=s+x;
}
a=s/n;
printf("Sum: %d\n",s);
printf("Avg: %.2f\n",a);
return 0;
}
