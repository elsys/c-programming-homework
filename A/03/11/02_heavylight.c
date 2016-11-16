#include<stdio.h>

int main(){
 int i = 0 ,a ;
 float avg = 0;
scanf("%d", &a);
while(a>0) {
 avg = avg + a%10;
i++;
   a = a/10;

}
avg =avg/i;
if(avg > 7){
printf("heavy");
}
    else{
 printf("light");
}
    return 0;
}
