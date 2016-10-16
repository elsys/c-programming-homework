#include <stdio.h>
int main()
{   float numb1,numb2,numb3;
    scanf("%f",&numb1);
    scanf("%f",&numb2);
    scanf("%f",&numb3);
    if(numb1>numb2)if(numb1>numb3)printf("%.1f \n", numb1);
           else printf("%.1f \n", numb3);
    else if(numb2>numb3)printf("%.1f \n", numb2);
         else printf("%.1f \n", numb3);
}
