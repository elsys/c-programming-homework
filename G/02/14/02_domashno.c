#include <stdio.h>
int main()
{   float ch1,ch2,ch3;
    scanf("%f",&ch1);
    scanf("%f",&ch2);
    scanf("%f",&ch3);
    if(ch1>ch2)
        if(ch1>ch3)printf("%.1f \n", ch1);
           else printf("%.1f \n", ch3);
    else if(ch2>ch3)printf("%.1f \n", ch2);
         else printf("%.1f \n", ch3);
}
