#include <stdio.h> 

int main()

{
 float a, b, v;
scanf("%f", &a);
scanf("%f", &b);
scanf("%f", &v);

if(a>b && a>v){
printf("%f", a);
}
else if(b>a && b>v){
printf("%f", b);
}
else if (v>a && v>b){
printf("%f", v);
}


return 0;
}
