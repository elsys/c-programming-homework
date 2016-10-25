#include <stdio.h>
int main(){
int n,s;
float i;
scanf("%d",&n);
for(;n/10>0;i++){
s=s+n%10;
n=n/10;
}
if(s/i>7){
printf("heavy\n");
}
else{
printf("light\n");
return 0;
}
}
