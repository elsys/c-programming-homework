#include <stdio.h>

int main()
{
int a,b,c,i=0;
float d=0;
scanf("%d",&a);
b=a;
while(b>0){
    c=b%10;
    b=b/10;
    d=d+c;
    i++;
}
d=d/i;
if(d>7){
    printf("heavy");
}
else{
    printf("light");
}
    return 0;
}
