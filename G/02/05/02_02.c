#include <stdio.h>

int main()
{
  float num,max;
  
    scanf("%f",&num);
    max=num;
    scanf("\n%f",&num);
        if(num>max)max=num;
    scanf("\n%f",&num);
        if(num>max)max=num;
    printf("%.1f",max);
    return 0;
}
