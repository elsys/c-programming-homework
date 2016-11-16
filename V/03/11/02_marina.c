#include<stdio.h>
int main(){
int m,a;
a=0;
float r,i;
i=0;
scanf("%d",&m);
while(m!=0){
i=i+m%10;
m=m/10;
a++;
}
r=i/a;
if(r<=7){
printf("light\n");
}
else if(r>7){
printf("heavy\n");
}
return 0;
}

