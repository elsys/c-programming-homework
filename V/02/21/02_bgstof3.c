#include <stdio.h>
int main(){
float a,i,k;
scanf("%f", &a);
k=a;
for(i=0;i<2;i++){
scanf("%f", &a);
if(a>k){
k=a;
}
}
printf("%.1f\n", k);
return 0;
}
