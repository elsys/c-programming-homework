#include <stdio.h>
int main ()
{
float i,m,a;
i=1;
scanf("%f",&a);
m=a;
do{
scanf("%f",&a);
if(m<a)
m=a;
i++;
}while(i<3);
printf("%.1f\n",m);

return 0;
}
